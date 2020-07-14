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
#define sort(a) sort(a.begin(),a.end())
#define set_diff(a,b,c) set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(c,c.begin()))
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    test(t)
    {
        // Input
        num(n);
        arr(a,n);
        arr(b,n);

        int mn = min(*min_element(a.begin(), a.end()), *min_element(b.begin(), b.end()));
        
        // Create a map to ensure overall frequency of all elements present is even
        map<int, int>
            m;
        loop(i,0,n) {m[a[i]]++;m[b[i]]++;}
        bool impossible = false;
        for(auto it: m) {if(it.second%2){impossible = true;}}
        
        // If odd frequency, then impossible
        if(impossible){cout<<-1<<endl;}
        
        // Else
        else
        {
            // Create the ideal array which should be made after swapping
            vector<int> good;
            for(auto it: m){loop(i,0,it.second/2){good.push_back(it.first);}}

            // set_difference(a,good) & set_difference(b,good)
            sort(a);sort(b);
            vector<int> bad1; set_diff(a,good,bad1);
            vector<int> bad2; set_diff(b,good,bad2);
            
            // Take "union"
            vector<int> bad;
            loop(i,0,bad1.size()){bad.push_back(bad1[i]);bad.push_back(bad2[i]);}
            sort(bad);

            // Sum the sorted first half and if element is greater than 2*min then use 2*mn instead.
            int cost = 0;
            loop(i,0,bad.size()/2){cost+=min(2*mn,bad[i]);}

            cout<<cost<<endl;
        }
    }
    return 0;
}

/*
Explain:

a a 

*/