#include <bits/stdc++.h>
using namespace std;
#define li long long

int main()
{
    li t;
    cin>>t;
    
    while(t--)
    {
        li n,k;
        cin>>n>>k;
        
        if((n/k)%k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}