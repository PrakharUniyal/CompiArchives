#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s

int main()
{
    int val[101];
    val[0]=0;
    val[1]=1;
    for(int i=2;i<101;i++) {val[i]=val[i-1]+(4*(i-1));}
    num(s);
    cout<<val[s]<<endl;
}
