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
        arr(s,n);

        if(n%2){cout<<-1<<endl; continue;}

        vector<pair<int,int>> p;

        loop(i,0,n)
        {
            loop(j,i+1,n)
            {
                p.push_back(make_pair(i,j));
            }
        }

        map<int,set<int>> m;

        loop(i,0,p.size())
        {
            // cout<<p[i].first<<" "<<p[i].second<<" "<<(s[p[i].first]^s[p[i].second])<<endl;
            m[s[p[i].first]^s[p[i].second]].insert(p[i].first);
            m[s[p[i].first]^s[p[i].second]].insert(p[i].second);
        }

        bool f = false;
        for(auto it:m)
        {
            if(it.second.size()==n)
            {
                cout<<it.first<<endl;
                f=true;
                break;
            }
        }

        if(!f)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}

/*
Explain:

*/