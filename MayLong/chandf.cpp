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
#define ll long long

int main()
{
    ok;
    test(t)
    {
        num(x);
        num(y);
        num(l);
        num(r);

        ll o = x|y;

        if(o>r)
        {

        }
        else if(o>=l)
        {
            cout<<o<<endl;
        }
        else
        {
            cout<<(o|l)<<endl;
        }
    }
    return 0;
}

/*
Explain:

X=7,Y=12

4 17

00111
01100
01111

00100

10001
*/