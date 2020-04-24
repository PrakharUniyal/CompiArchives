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
    num(n);

    if(n%2){cout<<-1<<endl;}
    else
    {
        int m = n + (int) n/2;
        vector<int> v;
        loop(i,0,m){v.push_back(i+1);}
        loop(i,0,n/2){v.push_back(2*n+n/2+i+1);}

        vector<vector<int>> mp;
        loop(i,0,n)
        {
            vector<int> tm;
            tm.push_back(v[i]);
            tm.push_back(v[n+i]);
            tm.push_back(2*n-n/2+i+1);
            tm.push_back(3*(2*n-(int)n/2+i+1)-v[i]-v[n+i]);
            mp.push_back(tm);
        }

        cout<<n<<endl;
        loop(i,0,n)
        {
            cout<<mp[i][2]<<" "<<mp[i][0]<<" "<<mp[i][1]<<" "<<mp[i][3]<<endl;
        }

    }
    return 0;
}
