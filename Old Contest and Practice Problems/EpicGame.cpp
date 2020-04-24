#include <bits/stdc++.h>
using namespace std;

int ans(int a,int b,int n,int i)
{
    if (n<__gcd(a,n)) return i;
    else
    {
        i=i^1;
        n-=__gcd(a,n);
        return ans(b,a,n,i);
    }
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    
    if (ans(a,b,n,1)) cout<<1<<endl;
    else cout<<0<<endl;
}