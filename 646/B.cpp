#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    test(t)
    {
        str(s);
        int n = s.size();

        int o=0,z=0;
        loop(i,0,n)
        {
            if(s[i]=='1'){o++;}
            else{z++;}
        }

        int lo=0,lz=0,ro=o,rz=z;

        int ans = min(o,z);

        loop(i,0,n-1)
        {
            if(s[i]=='0')
            {
                lz++;
                rz--;
            }
            else
            {
                lo++;
                ro--;
            }
            ans = min(ans,min(lo + rz, ro + lz));
        }

        cout<<ans<<endl;


    }
    return 0;
}

/*
Explain:

*/