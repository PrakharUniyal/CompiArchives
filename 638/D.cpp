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

        vector<int> inc;
        for(int i=1;i<=n;i*=2)
        {
            inc.push_back(i);
            n-=i;
        }

        if(n>0){inc.push_back(n);}

        sort(inc.begin(),inc.end());

        cout<<inc.size()-1<<endl;

        loop(i,1,inc.size())
        {
            cout<<inc[i]-inc[i-1]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Explain:

*/