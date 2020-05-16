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
    num(a);
    num(b);
    num(c);
    num(d);
    
    vector<int> m;
    int x = min(b-a+1,c-b+1);
    int y = max(b-a+1,c-b+1);
    loop(i,0,x-1)
    {
        m.push_back(i+1);
    }

    loop(i,0,y-x+1)
    {
        m.push_back(min(b-a+1,c-b+1));
    }

    loop(i,0,x-1)
    {
        m.push_back(x-1-i);
    }

    // loop(i,0,m.size())
    // {
    //     cout<<m[i]<<" ";
    // }
    // cout<<endl;

    int ans=0;
    loop(i,0,m.size())
    {
        // cout<<m[i]<<" "<<max(0LL,min(a+b+i,d+1)-c)<<endl;
        ans += m[i] * max(0LL, min(a + b + i, d + 1) - c);
    }

    cout<<ans<<endl;

    return 0;
}

/*
Explain:

*/