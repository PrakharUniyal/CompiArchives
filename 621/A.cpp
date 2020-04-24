#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        num(d);

        arr(a,n);

        int ans = a[0];
        loop(i,1,n)
        {
            if(i*a[i]<=d)
            {
                ans+=a[i];
                d-=i*a[i];
            }
            else
            {
                ans+=floor(d/i);
                d-=floor(d/i)*i;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
