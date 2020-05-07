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
    vector<int> v;
    loop(i,0,1e5+1)
    {
        v.push_back(i*(3*i+1)/2);
    }

    // loop(i,0,10){cout<<v[i]<<" ";}cout<<endl;
    
    test(t)
    {
        num(n);
        int c = 0;
        while(n>=2)
        {
            if(v[upper_bound(v.begin(),v.end(),n)-v.begin()-1]==n){n-=n;}
            n-=(v[upper_bound(v.begin(),v.end(),n)-v.begin()-1]);
            // cout<<n<<endl;
            c++;
        }

        cout<<c<<endl;
    }
    return 0;
}

/*
Explain:

*/