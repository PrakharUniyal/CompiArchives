#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

long long power(long long k, long long p, long long m)
{
    if (p == 0) {return 1LL;}

    long long P = power(k, p / 2LL,m);
    P = (P * P) % m;

    if (p % 2 == 1) {P = (P * k) % m;}
    return P;
}

long long inv(long long x, long long m) {return power(x,m-2,m);}

int fc[100001];
int mfc[100001];

int main()
#define int long long
{
    int m = 1e9+7;
    num(t);
    fc[0] = 1;
    for(int i=1;i<100001;i++){fc[i]=(i*fc[i-1]%m)%m;}

    for(int i=0;i<100001;i++){mfc[i]=inv(fc[i],m);}

    while(t--)
    {
        num(n);
        arr(x,2*n);

        int sum = 0;
        for(int i=0;i<2*n;i++){sum+=x[i];}
        int mx = sum/(n+1);

        sort(x.begin(),x.end());

        bool poss=false;
        vector<int> pp;
        int k=0;
        loop(i,2*n) {if(x[i]==mx && k<2){k++;} else {pp.push_back(x[i]);}}


        if(k!=2){poss=true;}
        for(int i=0;i<n-1;i++){if(pp[i]+pp[2*(n-1)-1-i]!=mx){poss=true;}}

        if(poss==true){cout<<0<<endl;}
        else
        {
            vector<int> pr(n-1);
            for(int i=0;i<n-1;i++) {pr[i]=pp[i];}

            vector<int> pos;
            for(int i=1;i<n-1;i++){if(pr[i-1]!=pr[i]){pos.push_back(i);}}
            pos.push_back(n-1);

            if(pos.size()>1){for(int i=pos.size()-1;i>0;i--) {pos[i]=pos[i]-pos[i-1];}}

            int y=0;
            if(mx%2==0){loop(i,n-1) {if(pr[i]==mx/2){y++;}}}

            int ans=fc[n-1];

            for(int i=0;i<pos.size();i++) {ans*= mfc[pos[i]]; ans%=m;}

            ans*=power(2,n-1-y,m);
            ans%=m;

            cout<<ans<<endl;
        }
    }
    return 0;
}
