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
int main()
#define int long long
{
    ok;
    num(n);
    num(a);
    num(r);
    num(m);

    arr(h,n);

    int c = min(min(a,r),m);
    int cost = 0;
    if(c==a)
    {
        int mh = *max_element(h.begin(),h.end());

        loop(i,0,n)
        {
            cost+=(a*(mh-h[i]));
        }

        int ncost = cost;
        int ocost = cost;
        while(ncost<ocost)
        {
            ocost = ncost;
            ncost -= 0;
        }
    }
    else if(c==r)
    {

    }
    else
    {
        
    }

    return 0;
}

/*
Explain:
INCOMPLETE
*/