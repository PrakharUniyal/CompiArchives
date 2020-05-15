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
    test(t)
    {
        num(n);

        vector<int> f;

        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                f.push_back(i);
                if(i!=sqrt(n))
                {
                    f.push_back(n/i);
                }
            }
        }

        sort(f.begin(),f.end());

        bool fl = true;
        loop(i,0,f.size())
        {
            loop(j,0,f.size())
            {
                if(f[i]!=f[j] && n%(f[i]*f[j])==0 && n/(f[i]*f[j])!=1 && n/(f[i]*f[j])!=f[i] && n/(f[i]*f[j])!=f[j])
                {
                    cout<<"YES"<<endl;
                    cout<<f[i]<<" "<<f[j]<<" "<<n/(f[i]*f[j])<<endl;
                    fl=false;
                    break;
                }
            }
            if(fl==false){break;}
        }

        if(fl){cout<<"NO"<<endl;}
    }
    return 0;
}

/*
Explain:

*/