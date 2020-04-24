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
int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        arr(a,n);

        if(a.size()==1)
        {
            if(a[0]%2){de(-1);}
            else {de(1);de(1);}
        }
        else
        {
            bool flag = false;
            loop(i,0,n)
            {
                if(a[i]%2 == 0){de(1);de(i+1);flag=true;break;}
            }
            if(!flag)
            {
                de(2);cout<<1<<" "<<2<<endl;
            }
        }
        
    }
    return 0;
}

/*
Explain:
If array size is one and element is odd then -1
else always a solution possible.
if one even element then 1 and even element's index.
if no even element then 2 and first 2 indices(1 & 2).
*/