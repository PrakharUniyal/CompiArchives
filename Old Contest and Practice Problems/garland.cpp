#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    arr(p,n);

    int is[n+1];
    loop(i,n+1) {is[i]=0;}
    loop(i,n) {is[p[i]]++;}

    int ox=0;
    int ex=0;
    loop(i,n+1)
    {
        if(!is[i]){cout<<i<<endl; if(i%2){ox++;} else{ex++;}}
    }

    vector<int> od;
    vector<int> ev;

    int ans=0;

    loop(i,n)
    {
        if(p[i]==0)
        {
            if(i==0){if(p[1]%2){od.push_back(i);} else{ev.push_back(i);}}
            else if(i==n-1){if(p[n-2]%2){od.push_back(i);} else{ev.push_back(i);}}
            else
            {
                if(p[i-1]%2==p[i+1]%2)
                {
                    if(p[i-1]%2){od.push_back(i);}
                    else {ev.push_back(i);}
                }
                else
                {
                    ans++;
                }
                
            }
        }
    }

    if(od.size()>ox) {ans+=od.size()-ox;}
    if(ev.size()>ex) {ans+=ev.size()-ex;}

    cout<<ans<<endl;
    return 0;
}
