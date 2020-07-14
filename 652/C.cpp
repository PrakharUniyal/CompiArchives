#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
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
        num(n);
        num(k);

        arr(a,n);

        arr(w,k);

        sort(w.begin(),w.end(),greater<int>());
        sort(a.begin(),a.end());

        int ans = 0;

        ans+=a[0];
        rloop(i,1,k)
        {
            ans+=a[w[i-1]-1];
        }

        
    }
    return 0;
}

/*
Explain:

*/