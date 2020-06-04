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
        num(a);
        num(b);

        if(b>=a)
        {
            if(b%a==0 && pow(2,(int)log2(b/a))==b/a)
            {   
                if((int)(log2(b/a))%3==0)
                {
                    cout<<(int)log2(b/a)/3<<endl;
                }
                else
                {
                    cout<<(int)(1+(log2(b/a)/3))<<endl;
                }   
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            if (a % b == 0 && pow(2, (int)log2(a/b)) == a/b)
            {
                if ((int)(log2(a/b)) % 3 == 0)
                {
                    cout << (int)log2(a/b) / 3 << endl;
                }
                else
                {
                    cout << (int)(1 + (log2(a/b) / 3)) << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

/*
Explain:

*/