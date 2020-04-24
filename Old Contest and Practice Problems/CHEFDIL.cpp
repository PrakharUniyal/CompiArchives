#include <bits/stdc++.h>
using namespace std;
#define li long long

int main()
{
    li t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        li cnt=0;
        
        for(int i=0;i<s.size();i++){if(s[i]=='1'){cnt++;}};
        
        if(cnt%2) cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;
    }
}