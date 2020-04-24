#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

int main()
#define ll int
{
    num(t);
    while(t--)
    {
        num(n);
        arr(s,n);
        
        ll sm=0;
        sm+=s[0];
        for(int i=1;i<n;i++) {if(s[i]>s[i-1]){s[i]=s[i-1];}sm+=s[i];}
        cout<<sm<<endl;
    }
}