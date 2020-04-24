#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl
int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(a);
        num(b);
        num(c);
        num(s);
        int l = c-s;
        int r = c+s;
        
        if(l>max(a,b)) {de(abs(a-b));}
        else if(l>min(a,b)) { if(r>max(a,b)){de(l-min(a,b));} else {de(max(a,b)-r+l-min(a,b));}}
        else { if(r>max(a,b)) {de(0);} else if(r>min(a,b)) {de(max(a,b)-r);} else {de(abs(a-b));}}
    }
    return 0;
}   
