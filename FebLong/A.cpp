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
int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        num(p);

        arr(d,n);

        bool flag=false;
        int k = 0;
        loop(i,0,n)
        {
            if(p%d[i]!=0){flag=true; k=i; break;}
        }

        bool fflag = false;
        int l=0;
        if(!flag)
        {
            loop(i,1,n)
            {
                if(d[i]%d[i-1]!=0){l=i; fflag=true; break;}
            }
        }

        if(flag){cout<<"YES "; loop(i,0,k){cout<<"0 ";} cout<<(1+((int) p/d[k]))<<" "; loop(i,k+1,n){cout<<"0 ";} cout<<endl;}
        else
        {
            if(fflag){cout<<"YES "; loop(i,0,l-1){cout<<"0 ";} cout<<((int) d[l]/d[l-1]+1)<<" "; cout<<(p/d[l]-1)<<" "; loop(i,l+1,n){cout<<"0 ";} cout<<endl;}
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
