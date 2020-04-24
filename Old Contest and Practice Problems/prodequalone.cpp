#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++){cin>>a[i];}

int main()
{
    #define int long long
    num(n);
    arr(val,n);
    
    bool zero=false;
    int c=0,cnt=0;

    for(int i=0;i<n;i++)
    {
        if(val[i]==0){zero=true; c++;}
        else if(val[i]>0) {c+=val[i]-1;}
        else {c+=abs(val[i]+1); cnt++;}
    }
    
    if(zero) {cout<<c<<endl;}
    else
    {
        if(cnt%2){cout<<c+2<<endl;}
        else {cout<<c<<endl;}
    }
}
