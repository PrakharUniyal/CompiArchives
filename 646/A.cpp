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

        int o=0,e=0;
        loop(i,0,n)
        {
            if(a[i]%2){o++;}
            else{e++;}
        }

        if(e>=x-1)
        {
            if(o>=1){de("Yes");}
            else{de("No");}
        }
        else
        {
            if((x-e)%2)
            {
                if(o>=x-e){de("Yes");}
                else{de("No");}
            }
            else
            {
                if(o>=x-e+1 && e!=0){de("Yes");}
                else{de("No");}
            }
        }
    }
    return 0;
}

/*
Explain:

*/