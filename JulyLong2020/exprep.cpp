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

long long powm(long long A, long long B, long long C)  
{    
    if (A == 0) {return 0;} if (B == 0) {return 1;} long long y;
    if (B % 2 == 0) {y = powm(A, B / 2, C); y = (y * y) % C;}  
    else {y = A % C; y = (y * powm(A, B - 1, C) % C) % C;}  
    return (long long)((y + C) % C);
}

long long inv(long long n,long long m) {return powm(n,m-2,m);}

int main()
#define int long long
{
    ok;
    int m = 998244353;
    test(t)
    {
        str(s);
        int n = s.size();
        arr(w,26);

        int ans = 0;

        loop(start,0,n)
        {
            string cur="";
            string patt="";
            int patwt=0;
            int patcnt=0;
            int curw=0;
            int ptr=0;
            loop(stop,start,n)
            {
                cur+=s[stop];
                curw+=w[s[stop]-'a'];
                curw%=m;
                if(patt.size()==0 || s[stop]!=patt[ptr])
                {
                    patt = cur;
                    patwt = curw;
                    ptr = 0;
                    patcnt = 0;
                }
                else
                {
                    if(ptr==0){patcnt++;}
                    ptr++;
                    if(ptr==patt.size()) {ptr=0;}
                }
                cout<<curw<<endl;
                ans += curw;
                ans %= m;
                int x = patcnt;
                x*=(patcnt+1);
                x%=m;
                x*=inv(2,m);
                x*=patwt;
                x%=m;
                cout<<x<<endl;
                ans += x;
                ans%= m ;
                cout<<" "<<start<<" "<<stop<<" "<<ans<<endl;
                // ans = 0;
            }
        }
        int sm = n*(n+1)/2;
        sm%=m;
        ans*=inv(sm,m);
        ans%=m;
        cout<<ans<<endl;
    }
    return 0;
}

/*
Explain:

*/