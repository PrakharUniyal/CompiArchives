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
{
    num(t);
    while(t--)
    {
        num(n);
        num(s);
        num(k);

        arr(a,k);

        int x=0;
        int f=0;
        while(true)
        {
            bool y=false;
            bool z=false;

            loop(i,k)
            {
                if(a[i]==s-x){x++; y=true; break;}
            }
            if(y) {continue;}

            loop(i,k)
            {
                if(a[i]==s+f){f++; z=true; break;}
            }
            if(z){continue;}

            if(s-min(x,f)>0 && s+min(x,f)<=n){cout<<min(x,f)<<endl;}
            else
            {
                cout<<max(x,f)<<endl;
            }
            break;
        }
    }
    return 0;
}
