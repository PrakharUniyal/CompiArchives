#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}

int main()
{
    num(n);
    arr(p,n);
    
    vector<vector<int>> al;
    for(int i=0;i<n;i++){vector<int> temp; al.push_back(temp);}
    
    for(int i=0;i<n;i++)
    {
        al[i].push_back(p[i]-1);
    }
    
    for(int i=0;i<n;i++)
    {
        int vis[n];
        for(int j=0;j<n;j++){vis[j]=0;}
        
        int ind=i;
        while(vis[ind]!=1)
        {
            vis[ind]=1;
            ind=al[ind][0];
        }
        
        cout<<ind+1<<" ";
    }
    cout<<endl;
}
