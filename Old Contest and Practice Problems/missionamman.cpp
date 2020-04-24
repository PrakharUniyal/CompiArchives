#include <bits/stdc++.h>
using namespace std;
#define li long long
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007
 
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    
    vector<int> a(n+1);
    for(int i=1;i<n+1;i++) cin>>a[i];
    
    vector<int> p(m+1);
    for(int i=1;i<m+1;i++) p[i]=0;
    
    for(int i=1;i<=n;i++){p[a[i]]++;}
    
    int ans=0;
    for(int i=1;i<=m;i++){if(p[i]==0){ans++;}}
 
    for(int i=0;i<q;i++)
    {
        int A,B;
        cin>>A>>B;
        if(p[a[A]]>1 && p[B]==0) cout<<--ans<<endl;
        else if(p[a[A]]>1 && p[B]>0) cout<<ans<<endl;
        else if(p[a[A]]==1 && p[B]==0) cout<<ans<<endl;
        else if(p[a[A]]==1 && p[B]>0) cout<<++ans<<endl;
        else ;
        p[a[A]]--;
        p[B]++;
        a[A]=B;
    }
}