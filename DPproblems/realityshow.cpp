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
    num(n);
    num(m);

    arr(l,n);

    arr(s,n);

    arr(c,n+m);


    return 0;
}

/*
let maxprofit(n) be the maxprofit possible for n given participants.
Then it can be written as:
    maxprofit(n) = max(maxprofit(n-1), maxprofit(n-1) + (c[l[n-1]]-s[n-1]) + one_if_rep*(l[n-1]-c[l[n-1]]))
*/