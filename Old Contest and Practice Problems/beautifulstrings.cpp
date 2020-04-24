#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}

int main()
{
    num(t);
    map<char,char> m;
    m['a']='b';
    m['b']='c';
    m['c']='a';
    
    while(t--)
    {
        str(s);
        bool flag=false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]&&s[i]!='?') {flag=true;}
        }
        
        if(flag){cout<<-1<<endl;}
        else
        {
            if(s[0]=='?') {s[0]=m[s[1]];}
            if(s[s.size()-1]=='?') {s[s.size()-1]=m[s[s.size()-2]];}
            for(int i=1;i<s.size()-1;i++)
            {
                if(s[i]=='?')
                {
                    if(s[i+1]!=m[s[i-1]]){s[i]=m[s[i-1]];}
                    else {s[i]=m[m[s[i-1]]];}
                }
            }
            cout<<s<<endl;
        }
    }
}
