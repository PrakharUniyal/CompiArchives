#include <bits/stdc++.h>
using namespace std;
#define li long long

int main()
{
    li t;
    cin>>t;
    
    while(t--)
    {
        li n;
        cin>>n;
        
        vector<li> c(n),h(n),chg(n+2),p(n);
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            chg[max(i+1-c[i],1LL)]++;chg[min(i+1+c[i]+1,n+1)]--;
        }
        for(int i=0;i<n;i++){cin>>h[i];}
        
        li m=0;
        for(int i=0;i<n;i++){m+=chg[i+1];p[i]=m;}
        
        sort(p.begin(),p.end());
        sort(h.begin(),h.end());
        
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(p[i]!=h[i]) {flag=true; break;}
        }
        
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}