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

//Code for Prime Factorization.
#define MAXN   10000001 
int spf[MAXN]; 
void makespf(){spf[1]=1;for(int i=2; i<MAXN; i++){spf[i] = i;}for(int i=4; i<MAXN; i+=2){spf[i] = 2;}for (int i=3; i*i<MAXN; i++){if(spf[i] == i){for(int j=i*i; j<MAXN; j+=i){if(spf[j]==j){spf[j] = i;}}}}} 
vector<long long> prime_factors(long long x){vector<long long> ret; while (x != 1){ret.push_back(spf[x]); x = x / spf[x];} return ret;} 

long long red(long long n)
{
    vector<long long> pf = prime_factors(n);
    if(pf.size()>=2)
    {
        loop(i,1,pf.size())
        {
            if(pf[i-1]==pf[i])
            {
                pf[i-1]=1;
                pf[i]=1;
                i++;
            }
        }
    }

    long long ans = 1;
    loop(i,0,pf.size()){ans*=pf[i];}
    return ans;
}

int main()
#define int long long
{
    ok;
    makespf();
    int mx = 1e5+1;
    test(t)
    {
        num(n);
        num(m);

        arr(x,n);
        arr(y,m);

        int zero = 0;
        int k = 0;
        loop(i,0,n){if(x[i]==0){ k = i; zero = 1;}}
        loop(i,0,m){if(y[i]==0){ k = i; zero = 2;}}
        if(zero==1){x.erase(x.begin()+k);}
        if(zero==2){y.erase(y.begin()+k);}

        vector<int> xp(1e5+1,0),xn(1e5+1,0),yp(1e5+1,0),yn(1e5+1,0);
        vector<int> xpl,xnl,ypl,ynl;
        loop(i,0,x.size())
        {
            if(x[i]>0){xp[x[i]]++; xpl.push_back(x[i]);}
            else {xn[-1*x[i]]++; xnl.push_back(-1*x[i]);}
        }

        loop(i,0,y.size())
        {
            if(y[i]>0){yp[y[i]]++; ypl.push_back(y[i]);}
            else {yn[-1*y[i]]++; ynl.push_back(-1*y[i]);}
        }

        int ans = 0;

        loop(i,0,xpl.size())
        {
            int xxpl = red(xpl[i]);
            for(int j=1;xxpl*j*j<1e5+1;j++)
            {
                if(xn[xxpl*j*j])
                {
                    double q = sqrt(xpl[i]*xxpl*j*j);
                    if(floor(q)==ceil(q))
                    {
                        if(yp[q]==1){ans++;}
                        if(yn[q]==1){ans++;}
                    }
                }
            }
        }

        loop(i,0,xnl.size())
        {
            int xxnl = red(xnl[i]);
            for(int j=1;xxnl*j*j<1e5+1;j++)
            {
                if(xp[xxnl*j*j])
                {
                    double q = sqrt(xnl[i]*xxnl*j*j);
                    if(floor(q)==ceil(q))
                    {
                        if(yp[q]==1){ans++;}
                        if(yn[q]==1){ans++;}
                    }
                }
            }
        }

        loop(i,0,ypl.size())
        {
            int yypl = red(ypl[i]);
            for(int j=1;yypl*j*j<1e5+1;j++)
            {
                if(yn[yypl*j*j])
                {
                    double q = sqrt(ypl[i]*yypl*j*j);
                    if(floor(q)==ceil(q))
                    {
                        if(xp[q]==1){ans++;}
                        if(xn[q]==1){ans++;}
                    }
                }
            }
        }

        loop(i,0,ynl.size())
        {
            int yynl = red(ynl[i]);
            for(int j=1;yynl*j*j<1e5+1;j++)
            {
                if(yp[yynl*j*j])
                {
                    double q = sqrt(ynl[i]*yynl*j*j);
                    if(floor(q)==ceil(q))
                    {
                        if(xp[q]==1){ans++;}
                        if(xn[q]==1){ans++;}
                    }
                }
            }
        }

        ans/=2;

        if(zero==1)
        {
            ans+=(n-1)*m;
        }
        if(zero==2)
        {
            ans+=(m-1)*n;
        }

        cout<<ans<<endl;
    }
    return 0;
}
