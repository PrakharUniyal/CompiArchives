#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=m;i>n;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    num(n);

    int m = 998244353;
    vector<int> a(2e5+1,1);

    loop(i,1,2e5+1) {a[i] = (a[i-1] * 10)%m;}

    loop(i,1,n)
    {
        int x = n - i -1;
        int ans = 2*10*9*a[x] + x*10*9*9*a[x-1];
        cout<<ans%m<<" ";
    }
    cout<<10<<endl;
    return 0;
}

/*
Explain:
Let there be a block of len l
and number of size n.

If the block is at boundary:
left/right: 2
number in it: 10
number in block adjacent to it: 9
numbers in rest of the blocks: pow(10,n-(l+1))
= 1800*pow(10,n-l-2)

Else:
where: n-l-1
number in it: 10
number in block on its left: 9
number in block on its right: 9
numbers in rest of the blocks: pow(10,n-(l+2))
= (n-l-1)*810*pow(10,n-l-2)

= ((1800 + 810*x)*pow(10,x-1))%m
= ((1800 + 810*x) * a[x-1])%m
= 
*/