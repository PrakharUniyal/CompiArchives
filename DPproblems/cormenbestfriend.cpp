#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=m;i>n;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    num(n);
    num(k);
    arr(a,n);

    vector<int> couple(n-1);
    int ans = 0;

    loop(i,0,n-1)
    {
        couple[i] = max(k - a[i]-a[i+1],0LL);
        ans+=couple[i];
        a[i+1] += couple[i];
    }

    de(ans);
    loop(i,0,n){cout<<a[i]<<" ";}cout<<endl;
    return 0;
}

/*
Explain:
Make pairs of consecutive days and store aggregate walks in those days.
Find number of walks short in each pair and add them in the latter day of the two so that these extra days can contribute in the next pair as well.
*/