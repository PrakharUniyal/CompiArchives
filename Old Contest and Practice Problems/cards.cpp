#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    int n; cin>>n;
    
    string s;
    cin>>s;
    
    int a=0;
    int b=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='n') a++;
        if(s[i]=='z') b++;
    }
    
    for(int i=0;i<a;i++) cout<<1<<" ";
    for(int i=0;i<b;i++) cout<<0<<" ";
    
}