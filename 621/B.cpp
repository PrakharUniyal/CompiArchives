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
        num(x);

        arr(a,n);

        sort(a.begin(),a.end());

        bool found = false;
        loop(i,0,n)
        {
            if(a[i]==x){found = true;}
        }

        if(found){cout<<1<<endl; continue;}
        
        if(a[n-1]<=x)
        {
            double y = ((double) x)/((double) a[n-1]);
            cout<<(int) ceil(y)<<endl;
        }

        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}
