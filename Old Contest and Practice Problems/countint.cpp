#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m,n,p; cin>>m>>n>>p;
    
    if (m==0) {cout<<1<<endl;}
    else
    {
    if(m%n==0) cout<<(1+p)<<endl;
    else
    {
    long long g=__gcd(m,n);
    long long l=n/g;
    long long ans=1+(p/l);
    cout<<ans<<endl;
    }
    }
    return 0;
}