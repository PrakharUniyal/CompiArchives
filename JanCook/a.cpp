#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(a);
        num(b);

        int d = max(a,b)-min(a,b);

        int ans=0;
        for(int i=1;i<=sqrt(d);i++)
        {
            if(d%i==0)
            {
                if(i==sqrt(d)){ans+=1;}
                else{ans+=2;}
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
