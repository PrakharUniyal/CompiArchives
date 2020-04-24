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
    num(m);
    int lim=200000;
    arr(x,n);
    
    sort(x,x+n);
    
    int l=x[0],r=x[n-1];
    int h[lim+lim+r-l+1];
    for(int i=0;i<lim+lim+r-l+1;i++){h[i]=0;}
    for(int i=0;i<n;i++){h[lim+x[i]-x[0]]=-1;}
    
    int cnt=1;
    for(int i=lim;i<lim+r-l+1;i++)
    {
        if(h[i]!=-1){h[i]=cnt; cnt++;}
        else {cnt=1;}
    }
    
    cnt=1;
    for(int i=lim+r-l+1;i>lim-1;i--)
    {
        if(h[i]!=-1) {h[i]=min(h[i],cnt);cnt++;}
        else {cnt=1;}
    }
    
    for(int i=0;i<lim;i++)
    {
        h[lim-1-i]=i+1;
        h[lim+r-l+1+i]=i+1;
    }
    
    vector<vector<int>> joh(lim);
    for(int i=0;i<lim+lim+r-l+1;i++)
    {
        if(h[i]!=-1)
        {
            joh[h[i]].push_back(i-lim+x[0]);
        }
    }
    
    vector<int> flk;
    vector<int> vl;
    for(int i=0;i<lim;i++)
    {
        if(joh[i].size())
        {
            for(int j=0;j<joh[i].size();j++)
            {
                flk.push_back(joh[i][j]);
                vl.push_back(i);
            }
        }
    }
    
    int ans=0;
    for(int i=0;i<m;i++) {ans+=vl[i];}
    cout<<ans<<endl;
    for(int i=0;i<m;i++) {cout<<flk[i]<<" ";}
    cout<<endl;
    
}   