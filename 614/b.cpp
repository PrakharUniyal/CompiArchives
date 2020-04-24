#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    double val[n+1];
    val[0]=0.0;
    val[1]=1.0;

    for(int i=2;i<n+1;i++)
    {
        val[i]=val[i-1]+(1.0/i);
    }

    cout<<val[n]<<endl;
    return 0;
}
