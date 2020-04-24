#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++){cin>>a[i];}

int main()
{
    num(n);
    
    int ans = n%2? 0 : pow(2,n/2);
    cout<<ans<<endl;
}
