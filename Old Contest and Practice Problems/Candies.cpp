#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<vector<pair<int,int>>> dp(20);
    int cur=1;
    
    for(int i=0; i<n; i++) dp[0].push_back(make_pair(a[i],0));
    
    int deg;
    for(deg=1;deg<20;deg++)
    {
        cur*=2;
        for(int i=0; i+cur<=n;i++)
        {
            int l1= dp[deg-1][i].first;
            int l2= dp[deg-1][i+cur/2].first;
            
            int c1= dp[deg-1][i].second;
            int c2= dp[deg-1][i+cur/2].second;
            
            int cf=c1+c2;
            int lf=(l1+l2)%10;
            if(l1+l2>=10) cf++;
            
            dp[deg].push_back(make_pair(lf,cf));
        }
    }
    
    int q; cin>>q;
    
    int l,r,len;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        len=r-l+1;
        deg=0;
        while(len%2==0){deg++;len/=2;}
        cout<<dp[deg][l-1].second<<endl;
    }
}