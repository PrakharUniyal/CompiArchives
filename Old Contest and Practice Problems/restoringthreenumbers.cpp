#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    vector<int> a(4);
    
    for(int i=0;i<4;i++) {cin>>a[i];}
    
    int n = *max_element(a.begin(),a.end());
    
    for(int i=0;i<4;i++)
    {
        if (a[i]!=n) cout<<n - a[i]<<" ";
    }
}