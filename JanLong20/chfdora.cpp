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
    num(t);
    while(t--)
    {
        num(n);
        num(m);

        vector<vector<int>> v(n);
        loop(i,n)
        {
            vector<int> temp(m);
            loop(j,m) {cin>>temp[j];}
            v[i]=temp;
        }

        int k=0;
        int ans=0;
        loop(i,n)
        {
            loop(j,m)
            {
                while(i>=k && i<=n-1-k && j>=k && j<=m-1-k && v[i-k][j]==v[i+k][j] && v[i][j-k]==v[i][j+k]){k++;ans++;}
                k=0;
            }
        }

        de(ans);
    }

    return 0;
}
