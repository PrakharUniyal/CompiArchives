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

long long md(long long a,long long b)
{
    if(a%b>=0){return a%b;}
    else {return b + a%b;}
}

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        arr(a,n);

        vector<int> dec(n);
        loop(i,0,n){dec[i]=md(i+a[i],n);}

        sort(dec.begin(),dec.end());

        bool flag=false;
        loop(i,1,n)
        {
            if(dec[i]==dec[i-1]){cout<<"NO"<<endl;flag=true;break;}
        }
        if(!flag)
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}

/*
Explain:

*/