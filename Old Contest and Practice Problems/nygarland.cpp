#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

int main()
{
    num(t);
    while(t--)
    {
        num(r);
        num(g);
        num(b);
        
        int m = max(r,max(g,b));
        int rem = r + g + b - m;
        if(rem>=m-1){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }
}