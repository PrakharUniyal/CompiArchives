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
        str(t);

        int n = s.size();

        vector<int> r(26,INT_MAX);
        vector<vector<int>> m(n+1,r);

        for(int i = n-1;i>-1;i--)
        {
            for(int j=0;j<26;j++)
            {
                m[i][j]=m[i+1][j];
            }
            m[i][s[i]-'a']=i;
        }

        int res = 1, pos = 0;
        for(int i = 0; i < t.size(); ++i){
            if(pos == s.size()){
                pos = 0;
                ++res;
            }
            if(m[pos][t[i] - 'a'] == INT_MAX){
                pos = 0; 
                ++res;
    		}
    		if(m[pos][t[i] - 'a'] == INT_MAX && pos == 0){
                res = INT_MAX;
                break;
            }    
            pos = m[pos][t[i] - 'a'] + 1;
        }
    
        if(res >= INT_MAX) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}

/*
Explain:

*/