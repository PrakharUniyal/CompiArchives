#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

vector<long long> sieve(long long n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (long long p = 2; p * p <= n; p++) {if (prime[p] == true) {for (long long i = p * p; i <= n; i += p){prime[i] = false;}}}
    vector<long long> ret;
    for (long long p = 2; p <= n; p++) {if (prime[p]){ret.push_back(p);}}
    return ret;
}

set<long long> pp(long long n)
{
    set<long long> ret;
    ret.insert(1);

    loop(i,2,log2(n)+1)
    {
        for(int j =2; pow(j,i)<=n;j++)
        {
            ret.insert(pow(j,i));
        }
    }

    return ret;

}

int main()
#define int long long
{
    ok;
    int mod = 1e9+7;
    set<int> p = pp(1e12);
    vector<int> v;
    for(auto it : p)
    {v.push_back(it);}
    loop(t,0,200)
    {
        int ans = 0LL;
        if(t<=1e12)
        {
            loop(i,0,v.size())
            {
                int x = v[i] * floor(t/v[i]);
                ans += x%mod;
                ans %= mod;
            }
        }
        cout<<ans<<",";
    }
    return 0;
}

/*
Explain:

find sabse badi power of p less than equal to n:
(floor(log(n)/log(p))-1)*pow(num,floor(log(n)/log(p)))


let a number n be represented as pi(pow(pi,ei))
Only those pi matter whose corresponding ei > 1.

Constraint on value of n: n can be upto 1e18
Implies O(n) won't work
Also no exp patterns are visible -> O(logn) complexity soln may not exist.
=> Have evaluate sigma(f(i)) from 1 to n in O(1).
Lets call sigma(f(i)) from 1 to n as g(n).

g(01) = 1
g(02) = 1 + 1
g(03) = 1 + 1 + 1
g(04) = 1 + 1 + 1 + (1 + 4)
g(05) = 1 + 1 + 1 + (1 + 4) + 1
g(06) = 1 + 1 + 1 + (1 + 4) + 1 + 1
g(07) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1
g(08) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8)
g(09) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9)
g(10) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1
g(11) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1 + 1
g(12) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1 + 1 + (1 + 4)
g(13) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1 + 1 + (1 + 4) + 1
g(14) = 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 +4+4+4+8+9 = 43
g(15) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1 + 1 + (1 + 4) + 1 + 1 + 1
g(16) = 1 + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8) + (1 + 9) + 1 + 1 + (1 + 4) + 1 + 1 + 1 + (1 + 4 + 8 + 16)

g(36) = 1*36 + 4*9 + 8*4 + 9*4 + 16*2 + 25*1 + 27*1 + 32*1 + 36*1


0 0 0 0 4 4 4 4 16 16 16 16 20 20 20 20 48 48 48 48 52 52 52 52 64 64 64 64 68 68 68 68 128 128 128 128 

00 00 00 00 04 04 04 04 08 08 08 08 12 12 12 12 16 16 16 16 20 20 20 20 24 24 24 24 28 28 28 28 32 32 32 32 36
00 00 00 00 00 00 00 00 08 08 08 08 08 08 08 08 16 16 16 16 16 16 16 16 24 24 24 24 24 24 24 24 32 32 32 32 32
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 32 32 32 32 32
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 32 32 32 32
00 00 00 00 04 04 04 04 16 16 16 16 20 20 20 20 48 48 48 48 52 52 52 52 64 64 64 64 68 68 68 68 128 128 128 132

0,4,16,20,48,52,64,68,128
0,2,8,10,24,26,32,34,64
0,1,4,5,12,13,16,17,32
0 4x1 8x2 - 16x3  
g(n) = sigma(i*floor(n/i)) (i is a perfect power not bigger than n).

Btw which nos are perfect power anyway?
all squares except 1: 4,9,16,25,....
all cubes except 1: 8,27,64,125

For pow(10,18) or pow(2,60) we will need:

sigma(pow(2,i))
i in [30,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2.....,2,1,....1]

perfect squares uptil n:
n1/2 to n1/1 : n1/2-n1/4
n1/4 to n1/2 : n1/4-n1/8
n1/8 to n1/4 : n1/8-n1/16
n1/16 to n1/8 : n1/16-n1/32
.
.
.
O(n1/2)+

*/