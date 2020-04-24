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
    
    int fc[n+1];
    fc[0]=1;
    for(int i=1;i<n+1;i++)
    {
        fc[i]=(i*fc[i-1]%m)%m;
    }
    
    
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
        ans+=((fc[i]*fc[n-i+1])%m*((n-i+1)%m))%m;
        ans%=m;
    }
    
    cout<<ans<<endl;
    
    
    return 0;
}
