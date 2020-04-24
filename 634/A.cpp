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

vector<long long> countFreq(vector<long long> arr)
{
    unordered_map<long long, long long> mp;

    // Traverse through array elements and
    // count frequencies
    for (long long i = 0; i < arr.size(); i++)
        mp[arr[i]]++;

    vector<long long> frq;

    // Traverse through map and print frequencies
    for (auto x : mp)
        frq.push_back(x.second);

    return frq;
}

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        arr(a,n);

        set<int> s;
        loop(i,0,n){s.insert(a[i]);}
        int dt = s.size();

        vector<int> cnt = countFreq(a);

        int sm = *max_element(cnt.begin(),cnt.end());

        if(sm==dt)
        {
            cout<<sm-1<<endl;
        }
        else
        {
            cout<<min(sm,dt)<<endl;
        }
        

    }
    return 0;
}

/*
Explain:

*/