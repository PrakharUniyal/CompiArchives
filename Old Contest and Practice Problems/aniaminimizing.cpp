#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    
    int n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    if(s.size()==1 && k==1){cout<<0<<endl; return 0;}
    
    if(s[0]!='1' && k>0) {s[0]='1';k--;}
    
    int i=1;
    while(k>0 && i!=n){if(s[i]!='0') {s[i]='0'; k--;} i++;}
    
    cout<<s<<endl;
}