#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n
#define str(s) string s; cin>>s

int main()
{
    int fib[21];
    fib[0]=1; fib[1]=1;
    for(int i=2;i<21;i++){fib[i]=fib[i-1]+fib[i-2];}
    num(n);
    cout<<fib[n]<<endl;
}
