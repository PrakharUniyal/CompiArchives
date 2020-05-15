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
    num(q);
    num(x);
 
    vector<int> mods(x,0);
 
    set<pair<int,int>> vals;
    loop(i,0,x)
    {
        vals.insert(make_pair(mods[i],i));
    }
 
    loop(i,0,q)
    {
        num(y);
        y%=x;
        vals.erase(make_pair(mods[y],y));
        mods[y]++;
        vals.insert(make_pair(mods[y],y));
 
        cout<<vals.begin()->first*x + vals.begin()->second<<endl;
    }
    
 
    return 0;
}