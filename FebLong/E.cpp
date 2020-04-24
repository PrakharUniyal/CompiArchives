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

long long powm(long long k, long long p, long long m) {if (p == 0) {return 1LL;} long long P = powm(k, p / 2LL,m); P = (P * P) % m; if (p % 2 == 1) {P = (P * k) % m;} return P;}
long long minv(long long x, long long m) {return powm(x,m-2,m);}

int main()
#define int long long
{
    ok;
    int MOD = 1e9+7;
    test(t)
    {
        num(n);
        str(a);

        int ans = 0;

        // //Reversing the string
        // string s = "";
        // loop(i,0,n) {s=a[i]+s;}

        int pos;
        int ev=0,od=0;
        int k = 0;
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==')') {st.push(n-i); if(st.size()%2) {od+=(n-i);ans+=od;} else {ev+=(n-i);ans+=ev;}}
            else if(a[i]=='(') {if(!st.empty()) {int x = st.top(); st.pop(); if(st.size()%2) {ev-=x;ans+=od;} else {od-=x;ans+=ev;}}}
            else {if(st.size()%2){ans+=od;}else{ans+=ev;}}
        }

        int cas = (n*(n+1)/2)%MOD;
        cout<<(ans%MOD*minv(cas,MOD))%MOD<<endl;
    }
    return 0;
}
