#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    num(m);
    
    vector<string> s(n);
    loop(i,n) {cin>>s[i];}
    vector<string> t(m);
    loop(i,m) {cin>>t[i];}
    
    num(q);
    vector<int> y(q);
    loop(i,q) {cin>>y[i];}
    
    loop(i,q)
    {
        cout<<s[(y[i]-1)%n]+t[(y[i]-1)%m]<<endl;
    }
    return 0;
}
