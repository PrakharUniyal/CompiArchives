#include <bits/stdc++.h>
using namespace std;
#define li long long
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

li wsum(vector<li> ind)
{
    li n=ind.size();
    li cf=n-1;
    li i=n-1;
    li ans=0;
    
    while(cf>=1-n)
    {
        ans+=cf*ind[i];
        cf-=2;
        i--;
    }
    
    ans-=(n*(n-1)/2);
    return ans;
}

int main()
{
    ios;
    li t;
    cin>>t;
    
    while(t--)
    {
        li n;
        cin>>n;
        
        vector<li> a(n),x(n+1);
        for(int i=0;i<n;i++) cin>>a[i];
        
        x[0]=0;
        for(int i=1;i<=n;i++){x[i]=x[i-1]^a[i-1];}
        
        vector<vector<li>> all(2000001);
        for(int i=0;i<n+1;i++){all[x[i]].push_back(i);}
        
        li sum=0;
        for(int i=0;i<2000001;i++){if(all[i].size()>1){sum+=wsum(all[i]);}}
        cout<<sum<<endl;
    }
}