#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s

void solve(string s)
{
    int n = s.size();
    int l[n],r[n],A[n];
    for(int i=0;i<n;i++){A[i]=0;}
    int cnt=0;
    for(int i=0;i<n;i++) {if(s[i]=='Q') {l[i]=cnt++;} l[i]=cnt; if(s[i]=='A') {A[i]=1;}}
    cnt=0;
    for(int i=n-1;i>=0;i--) {if(s[i]=='Q') {r[i]=cnt++;} r[i]=cnt;}
    int ans=0;
    for(int i=0;i<n;i++) {if(A[i]==1) {ans+=(l[i]*r[i]);}}
    cout<<ans<<endl;
}

int main()
{
    str(s);
    solve(s);
}
