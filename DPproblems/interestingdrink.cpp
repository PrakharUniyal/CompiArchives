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
    arr(x,n);
    sort(x.begin(),x.end());
    num(q);
    while(q--)
    {
        num(m);
        cout << upper_bound(x.begin(), x.end(), m) - x.begin() <<endl;
    }
    return 0;
}

/*
Explain:
Make a sorted list of prices in different shops.(nlogn)
In each query, do binary search for the index of element just bigger than mi.(qlogn)
*/