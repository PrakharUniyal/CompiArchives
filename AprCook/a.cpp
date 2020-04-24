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
        str(s);
        str(r);
        int n = s.size();

        vector<int> ind;
        for(int i=0;i<n;i++)
        {
            if(s[i]==r[i]){ind.push_back(1);}
            else{ind.push_back(0);}
        }

        vector<int> brk;
        brk.push_back(0);
        for(int i=1;i<n;i++)
        {
            if(ind[i]!=ind[i-1]){brk.push_back(i);}
        }

        vector<pair<int,int>> siz;
        for(int i=1;i<brk.size();i++)
        {
            siz.push_back(make_pair(brk[i]-brk[i-1],ind[brk[i-1]]));
        }







    }
    return 0;
}
