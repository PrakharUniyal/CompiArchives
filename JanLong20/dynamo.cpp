#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(n);
        num(a);
        
        int x = pow(10,n);
        
        int s = 2*x + a;
        cout<<s<<endl;
        cout.flush();
        
        num(b);
        int c = 1*x - b;
        cout<<c<<endl;
        cout.flush();
        
        num(d);
        int e = 1*x - d;
        cout<<e<<endl;
        cout.flush();
    }
    return 0;
}
