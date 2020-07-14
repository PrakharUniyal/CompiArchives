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
    test(t)
    {
        num(n);
        num(x);
        arr(a,n);

        sort(a.begin(),a.end());
        int i = (lower_bound(a.begin(),a.end(),x)-a.begin());
        if(i!=0)
        {
            while(i>0 && 2*a[i-1]>x) x=a[i-1],i--;
        }

        int ans=i;
        for(;i<n;i++)
        {
            int t_cur=a[i];
            int t_next=t_cur;
            int days=0;        
            while(t_next>0)
            {
                t_next-=x;
                days++;
                t_next=min(2*t_next,t_cur);
                x=min(2*x,a[i]);
            }
            if(i!=n-1) x=min(2*x,a[i+1]);
            ans+=days;
        }

        cout<<ans<<endl;
    }
    return 0;
}

/*
Explain:

*/