#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(n);
        arr(a,n);
        
        int s = 0;
        loop(n)
        {
            s+=a[i];
        }
        
        int x = 0;
        loop(n)
        {
            x^=a[i];
        }
        
        if(s==2*x){cout<<0<<endl<<endl;}
        else
        {
            cout<<2<<endl;
            cout<<x<<" "<<s+x<<endl;
        }
    }
}   