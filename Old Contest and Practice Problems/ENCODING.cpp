#include <bits/stdc++.h>
using namespace std;
#define li long long
#define mo %1000000007

li red(string s)
{
    char in = '0';
    for(li i=0;i<s.size();i++)
    {
        if(s[i]==in) {in=s[i]; s[i]='0';}
        else in=s[i];
    }
    return stoi(s);
}

string add1(string s)
{
    int ind=s.size()-1;
    while(s[ind]=='9' && ind>-1)
    {
        s[ind]='0';
        ind--;
    }
    
    if(ind!=-1)s[ind]++;
    else s='1'+s;
    return s;
}

int main()
{
    li t; cin>>t;
    while(t--)
    {
        li nl,nr;
        string l,r;
        
        cin>>nl>>l;
        cin>>nr>>r;

        li dif =stoi(r) - stoi(l);
        
        li ans=0LL;
        
        for(li i=0;i<=dif;i++)
        {
            ans+=(red(l))mo;
            l=add1(l);
        }
        
        cout<<(ans)mo<<endl;
    }
    return 0;
}