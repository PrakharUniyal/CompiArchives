#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

long long powm(long long A, long long B, long long C)  
{    
    if (A == 0) {return 0;}
    if (B == 0) {return 1;}  
    long long y;  
    if (B % 2 == 0) {  
        y = powm(A, B / 2, C);  
        y = (y * y) % C;  
    }  
    else {  
        y = A % C;
        y = (y * powm(A, B - 1, C) % C) % C;  
    }  
    return (int)((y + C) % C);  
}  

int main()
#define int long long
{
    ok;
    int m = 998244353;
    test(t)
    {
        num(n);
        num(x);

        arr(a,n);

        vector<int> px(n);

        px[0]=1;
        loop(i,1,n) {px[i]=((px[i-1])*x)%m;}
        // aout(px,i);
        vector<int> rpx(n);
        rpx[0]=1;
        loop(i,1,n) {rpx[i]=(rpx[i-1]+px[i])%m;}
        // aout(rpx,i);
        int ans = powm(a[0],n*(n+1)/2,m);
        loop(i,0,n)
        {
            // cout<<powm(rpx[i],n-i,m)<<" "<<rpx[i]<<" "<<n-i<<" "<<m<<endl;
            ans*=powm(rpx[i],n-i,m);
            ans%=m;
        }
        cout<<(ans*ans)%m<<endl;
        // cout<<powm(m-1, 4, 1);
    }
    return 0;
}

/*
Explain:

1,1 1,2 1,3 .. 1,N
    2,2 2,3 .. 2,N
        3,3 .. 3,N
        .
        .
               N,N


A1+A2X+A3X2...AnXn-1
*/