#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

unsigned nod(unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}

int main()
{
    num(t);
    while(t--)
    {
        str(s);
        int n = s.size();
        
        vector<int> loc;
        loc.push_back(0);
        
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1]){loc.push_back(i);}
        }
        
        loc.push_back(n);
        
        vector<int> dif(n);
        int sm=0;
        for(int i=0;i<loc.size()-1;i++)
        {
            dif[i]=loc[i+1]-loc[i]-1-nod(loc[i+1]-loc[i]);
            sm+=dif[i];
        }
        if(sm>0){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}   