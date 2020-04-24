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

vector<long long> divs(long long n) 
{
    vector<long long> ans;
    vector<long long> v; 
    for (long long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            ans.push_back(i);
            if (n/i != i) {v.push_back(n/i);}
        }
    } 

    for (long long i=v.size()-1; i>=0; i--) {ans.push_back(v[i]);}
    return ans;
} 

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);

        vector<int> div = divs(n);

        vector<pair<pair<int,int>,int>> ans;
        loop(i,1,div.size()-1)
        {
            loop(j,i+1,div.size()-1)
            {
                if(n%(div[i]*div[j])==0 && n/(div[i]*div[j])!=div[i] && n/(div[i]*div[j])!=div[j] && n/(div[i]*div[j])>1){ans.push_back(make_pair(make_pair(div[i],div[j]),n/(div[i]*div[j])));}
            }
        }

        if(ans.size()){de("YES"); cout<<ans[0].first.first<<" "<<ans[0].first.second<<" "<<ans[0].second<<endl;}
        else{de("NO");}
    }
    return 0;
}
