#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++){cin>>a[i];}

int main()
{
    num(n);
    arr(val,n);
    
    int ans[n];
    
    ans[0]=1;
    
    int l=1,ml=1;
    for(int i=1;i<n;i++)
    {
        if(val[i]>val[i-1]){l++;}
        else {l=1;}
        if(l>ml){ml=l;}
        ans[i]=ml;
    }
    cout<<ans[n-1]<<endl;
}
