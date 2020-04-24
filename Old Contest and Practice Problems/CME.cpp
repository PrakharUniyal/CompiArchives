#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) int n; cin>>n

int solve(int n)
{
    if (n<=4) return 4-n;
    return n%2;
}

int main()
{
    tests(q)
    {
        num(n);
        cout<<solve(n)<<endl;
    }
}
