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
        vector<pair<int,int>> r(n+1);
        r[0].first=0;
        r[0].second=0;
        loop(i,0,n) {cin>>r[i].first>>r[i].second;}

        sort(r.begin(),r.end());

        bool f = false;
        loop(i,1,n+1)
        {
            if(r[i-1].second>r[i].second){f=true; break;}
        }

        if(f){de("NO");}
        else
        {
            de("YES");

            loop(i,1,n+1)
            {
                loop(j,0,r[i].first-r[i-1].first){cout<<"R";}
                loop(j,0,r[i].second-r[i-1].second){cout<<"U";}
            }

            cout<<endl;
        }




    }
    return 0;
}
