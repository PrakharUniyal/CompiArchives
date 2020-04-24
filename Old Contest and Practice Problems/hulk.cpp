#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    
    string s1=" I hate ";
    string s2=" I love ";
    string t="that";
    string i="it";
    
    int n; cin>>n;
    
    string f="";
    for(int i=0;i<n-1;i++)
    {
        if(i%2) f+=s2+t;
        else f+=s1+t;
    }
    
    if(n%2) f+=s1+i;
    else f+=s2+i;
    
    cout<<f<<endl;
    
    return 0;
}