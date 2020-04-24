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

long long arr1[26],arr2[26][26];

int main()
#define int long long
{
    ok;
    str(s);

    loop(i,0,s.size())
    {
        int ind = s[i]-'a';
        loop(j,0,26)
        {
            arr2[j][ind]+=arr1[j];
        }
        arr1[ind]++;
    }

    int ans = 0;
    loop(i,0,26) {ans=max(ans,arr1[i]);}
    loop(i,0,26) {loop(j,0,26) {ans=max(ans,arr2[i][j]);}}

    cout<<ans<<endl;
    return 0;
}
