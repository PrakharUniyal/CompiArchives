#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(n);
        num(k);
        
        int i=1;
        while(n>=k*i){i++;}
        int x=n-(k*(i-1));
        // cout<<x<<endl;
        if(x<=k/2) {cout<<n<<endl;}
        else {cout<<k*(i-1) + k/2<<endl;}
    }
}   