#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define ek first
#define do second
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
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
        str(s);
        int n = s.size();
        vector<int> sin(10);
        loop(i,0,n) {sin[s[i]-'0']++;}

        int sans = *max_element(sin.begin(),sin.end());
        vector<vector<int>> dou(10,vector<int> (10));

        loop(i,0,10)
        {
            loop(j,i+1,10)
            {
                vector<int> pp = {i,j};
                int si = -1;
                int in = -1;
                loop(k,0,n)
                {
                    if(s[k]-'0'==i)
                    {
                        in = k;
                        si = 1;
                        dou[i][j]++;
                        break;
                    }
                    if (s[k] - '0' == j)
                    {
                        in = k;
                        si = 0;
                        dou[i][j]++;
                        break;
                    }

                }

                if(in!=-1)
                {
                    loop(k,in+1,n)
                    {
                        if(s[k]-'0'==pp[si])
                        {
                            si=(si+1)%2;
                            dou[i][j]++;
                        }
                    }
                }

                if(dou[i][j]%2){dou[i][j]--;}
                sans = max(sans,dou[i][j]);
            }
        }

        int ans = n - max(2LL,sans);
        de(ans);
    }
    return 0;
}

/*
Explain:

*/