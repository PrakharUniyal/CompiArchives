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

int eqv(string s,int i1,int i2)
{
    if((s[i1] == s[i2] && s[i1+1] == s[i2-1]))
    {
        return 1;
    }
    if(s[i1+1] == s[i2] && s[i1] == s[i2-1])
    {
        return 2;
    }
    else return 0;
}

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        str(s);

        int ans = 0;
        bool fl = false;
        loop(i,0,n/2 - 1)
        {
            if(!eqv(s,i,n-1-i)){fl=true; break;}
            else
            {
                ans+=(eqv(s,i,n-1-i)-1);
            } 
        }

        if(fl){de("NO");}
        else
        {
            de("YES");
            de(ans);
        }
    }

    return 0;
}
