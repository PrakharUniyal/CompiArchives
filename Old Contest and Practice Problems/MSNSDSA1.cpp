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
        
        vector<li> g(n),f(n),p(n);
        
        for(int i=0;i<n;i++) cin>>g[i];
        for(int i=0;i<n;i++) cin>>f[i];
        
        for(int i=0;i<n;i++)
        {
            if(2*g[i]-f[i]>0) {p[i]=2*g[i]-f[i];}
            else {p[i]=0;}
        }
        
        li m=-1;
        for(int i=0;i<n;i++)
        {
            if(p[i]>m) {m=p[i];}
        }
        
        cout<<10*m<<endl;
    }
}