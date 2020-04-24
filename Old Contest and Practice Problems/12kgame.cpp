#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        string wins="Alice";
        
        if (k%3!=0){if(n%3==0){wins="Bob";}}
        else{if((n%(k+1))%3==0 && (n%(k+1))!=k){wins="Bob";}}
        
        cout<<wins<<endl;
    }
}