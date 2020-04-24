#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int l = s.size()-1;
    
    if(s[0]=='S' && s[l]=='F') cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}