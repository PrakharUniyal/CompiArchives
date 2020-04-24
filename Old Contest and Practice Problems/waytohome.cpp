#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s

int main()
{
    num(n); num(d);
    str(s);

    bool fail=false;
    int cnt=0;
    int i=0;
    while(i!=n-1 && !fail)
    {
        if(s[i]=='1')
        {
            int max=0;
            for(int j=1;j<=min(d,n-i-1);j++)
            {
                if(s[i+j]=='1')
                {
                    max = j;
                }
            }
            if(max==0){fail=true;}
            else {i+=max; cnt++;}
        }
    }
    
    if(fail){cout<<-1<<endl;}
    else {cout<<cnt<<endl;}
}
