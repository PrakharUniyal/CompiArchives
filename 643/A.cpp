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
        num(a);
        num(k);

        

        int mn = INT_MAX;
        int mx = INT_MIN;
        
        int c = 1;

        while(mn!=0 && c<k)
        {
            mn = INT_MAX;
            mx = INT_MIN;
            string s = to_string(a);
            loop(i,0,s.size())
            {
                if(s[i]-'0'<mn){mn=s[i]-'0';}
                if(s[i]-'0'>mx){mx=s[i]-'0';}
            }
            // cout<<a<<" "<<mn<<" "<<mx<<endl;
            a+=(mn*mx);
            c++;
        }

        cout<<a<<endl;
    }
    return 0;
}

/*
Explain:

*/