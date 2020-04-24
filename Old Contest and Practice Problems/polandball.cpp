#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}

int main()
{
    num(n);
    
    if(n%2)
    {
        if(n==1) {cout<<3<<endl;}
        else {cout<<1<<endl;}
    }
    else
    {
        if(n==1000) {cout<<1<<endl;}
        else {cout<<2*((n/2)+1)<<endl;}
    }
}
