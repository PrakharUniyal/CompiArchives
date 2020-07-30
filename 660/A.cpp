#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define ek first
#define do second
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
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

        if(n==36)
        {
            de("YES");
            cout<<"5 6 10 15"<<endl;
            continue;
        }
        if(n==40)
        {
            de("YES");
            cout<<"5 6 14 15"<<endl;
            continue;
        }
        if(n==44)
        {
            de("YES");
            cout<<"6 7 10 21"<<endl;
            continue;
        }
        
        if(n<=30)
        {
            de("NO");
        }
        else
        {
            de("YES");
            cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
        
    }
    return 0;
}

/*
Explain:

*/