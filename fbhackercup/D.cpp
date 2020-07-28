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
#define INT_M 1e18+1
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int t; cin>>t;
    for(int x = 1; x<=t; x++)
    {
        num(n);
        num(m);
        arr(c,n);

        multiset<int> ms;
        vector<int> dp(n);

        int ans = 0;
        dp[0]=0;
        ms.insert(0);

        loop(i,1,n)
        {
            if (ms.size() > m) {ms.erase(ms.lower_bound(dp[i-m-1]));}
            // cout<<i<<": "; for(auto it: ms){cout<<it<<" ";}de(endl);
            ans = *ms.begin();
            dp[i]=ans+c[i];
            if(c[i]==0){dp[i]=INT_M;}
            ms.insert(dp[i]);
            if(*ms.begin()==INT_M) {ans = -1; break;}
        }

        cout<<"Case #"<<x<<": ";
        de(ans);
    }
    return 0;
}

/*
Explain:
5 3
0 20 30 0 10

0 0
0 0,20
0 0,20,30
20,30 20 20,20,30
20,30 20 20,30,40

*/