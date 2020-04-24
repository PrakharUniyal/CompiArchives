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
        num(x);
        str(s);

        int ans=0;

        int zz = (int) count(s.begin(),s.end(),'0');
        int tot = zz+zz-n;

        int bal = 0;
        bool fl = false;
        loop(i,0,n)
        {
            if(tot==0){ if(bal==x) {fl=true; break;}}
            else if(abs(x-bal)%abs(tot)==0){ if((x-bal)/tot>=0){ans++;}}

            if(s[i]=='0'){bal++;}
            else {bal--;}
        }

        if(fl){de(-1);}
        else{de(ans);}

    }
    return 0;
}
