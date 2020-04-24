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

long long power(long long k, long long p, long long m)
{
    if (p == 0) {return 1LL;}

    long long P = power(k, p / 2LL,m);
    P = (P * P) % m;

    if (p % 2 == 1) {P = (P * k) % m;}
    return P;
}

long long inv(long long x, long long m) {return power(x,m-2,m);}

int main()
#define int long long
{
    int m = 1e9+7;
    ok;
    num(n);
    num(p);

    int fc[n+1];
    int mfc[n+1];
    fc[0]=1;
    mfc[0]=1;
    loop(i,1,n+1){fc[i]=fc[i-1]*i%m; fc[i]%=m; mfc[i]=inv(fc[i],m);}

    arr(a,n);

    if(p==2){cout<<1<<" "<<1<<endl;}
    else
    {
        vector<int> md(p);
        loop(i,0,p){md[i]=0;}

        loop(i,0,n)
        {
            md[a[i]%p]++;
        }

        vector<int> dis;
        dis.push_back(md[0]+md[1]);
        loop(i,2,(int) ceil( (p/2.0)))
        {
            dis.push_back(md[i]+md[(p+1-i)%p]);
        }

        dis.push_back(md[ceil(p/2.0)]);

        int ans=0;
        loop(i,0,dis.size())
        {
            if(dis[i]){ans++;}
        }

        cout<<ans<<" ";

        int com=fc[n];

        loop(i,0,dis.size())
        {
            com*=mfc[dis[i]];
            com%=m;
        }

        cout<<com<<endl;

    }
    return 0;
}
