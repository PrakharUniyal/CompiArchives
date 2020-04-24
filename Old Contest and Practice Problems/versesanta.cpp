#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

int main()
{
    num(t);
    while(t--)
    {
        num(n); num(s);
        arr(v,n);
        
        int sm[n];
        sm[0]=v[0];
        for(int i=1;i<n;i++){sm[i]=v[i]+sm[i-1];}
        
        int m=-1;
        int ki=0;
        int mx[n],mxi[n];
        for(int i=0;i<n;i++)
        {
            if(v[i]>m){m=v[i];ki=i;}
            mx[i]=m;
            mxi[i]=ki;
        }
        
        if(sm[n-1]<=s){cout<<0<<endl;}
        else
        {
            int in=n-1;
            while(sm[in]>mx[in]+s){in--;}
            cout<<mxi[in]+1<<endl;
        }
    }
}   