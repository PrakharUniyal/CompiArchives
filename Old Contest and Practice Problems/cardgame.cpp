#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(n);
        num(k1);
        num(k2);
        arr(f,k1);
        arr(g,k2);
        
        int* i1; 
        i1 = std::max_element(f, f + k1); 
        int* i2; 
        i2 = std::max_element(g, g + k2);
        
        if(*i1>*i2){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
}   