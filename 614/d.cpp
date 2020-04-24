#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(x0);
    num(y0);
    num(ax);
    num(ay);
    num(bx);
    num(by);

    num(xs);
    num(ys);
    num(t);

    vector<int> x;
    x.push_back(x0);
    vector<int> y;
    y.push_back(y0);

    int L = (1LL<<62)-1;

    while((L-bx)/ax >=x.back() && (L-by)/ay >=y.back())
    {
        //cout<<x.back()<<" "<<y.back()<<endl;
        x.push_back(ax*x.back()+bx);
        y.push_back(ay*y.back()+by);
    }

    int n = x.size();

    int ans = 0;

    loop(i,0,n)
    {
        loop(j,i,n)
        {
            int length = x[j]-x[i] + y[j]-y[i];
            int dleft = abs(xs - x[i]) + abs(ys-y[i]);
            int dright = abs(xs-x[j])+abs(ys-y[j]);

            if(length <= t - dleft || length <= t-dright){ans = max(ans,j-i+1);}
        }
    }

    de(ans);

    return 0;
}
