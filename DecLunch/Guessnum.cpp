#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl

vector<long long> divs(long long n) 
{ 
    vector<long long> ans;
    vector<long long> v; 
    for (long long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            ans.push_back(i); 
            if (n/i != i) {v.push_back(n/i);}
        }
    }
    for (long long i=v.size()-1; i>=0; i--) {ans.push_back(v[i]);}
    return ans;
} 

int main()
#define int long long
{
    num(t);
    while(t--)
    {
        num(a);
        num(m);
        vector<int> d;
        d = divs(m);
        vector<int> k;
        for(int i=0;i<d.size();i++) {if((d[i]-1)%a==0 && d[i]!=1){k.push_back((d[i]-1)/a);}}
        
        cout<<k.size()<<endl;
        for(int i=0;i<k.size();i++) {cout<<k[i]*m/(a*k[i]+1)<<" ";}
        cout<<endl;
    }
}