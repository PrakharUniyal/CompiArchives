#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k; cin>>n>>k;
    long long s=n+k;
    s*=8;
    s+=9;

    long long ans=n+(3-((int) sqrt(s)))/2;
    cout<<ans<<endl;
}