#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

int main()
#define int long long
{
    num(n);
    arr(f,n);
    
    int mval[n],mloc[n];
    
    for(int i=0;i<n;i++) {mval[i]=0;}
    for(int i=0;i<n;i++)
    {
        if(f[i]==0){mloc[i]=0;}
        else {mloc[i]=1; mval[f[i]-1]=1;}
    }
    
    vector<int> both;
    vector<int> v,l;
    
    for(int i=0;i<n;i++)
    {
        if(mval[i]==0 && mloc[i]==0) {both.push_back(i+1);}
        if(mval[i]==0 && mloc[i]!=0) {v.push_back(i+1);}
        if(mval[i]!=0 && mloc[i]==0) {l.push_back(i);}
    }
    
    if(both.size()==0)
    {
        for(int i=0;i<l.size();i++) {f[l[i]]=v[i];}
    }
    else if(both.size()==1)
    {
        f[both[0]-1]=v[0];
        f[l[0]]=both[0];
        for(int i=1;i<l.size();i++) {f[l[i]]=v[i];}
    }
    else
    {
        for(int i=0;i<both.size();i++) {f[both[i]-1]=both[(i+1)%both.size()];}
        for(int i=0;i<l.size();i++) {f[l[i]]=v[i];}
    }
    
    for(int i=0;i<n;i++){cout<<f[i]<<" ";}
    cout<<endl;
}   