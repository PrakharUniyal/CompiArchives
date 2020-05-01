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
        num(k);
        str(s);
        sort(s.begin(),s.end());

        set<char> dis;

        for(int i=0;i<k;i++)
        {
            dis.insert(s[i]);
        }


        if(dis.size()>1)
        {
            vector<char> base(dis.begin(),dis.end());
            sort(base.begin(),base.end());
            cout<<base[base.size()-1]<<endl;
            continue;
        }

        else
        {
            char b = s[k-1];
            string ne = "";
            loop(i,k,n)
            {
                ne+=s[i];
            }

            if(ne[0]!=ne[ne.size()-1])
            {
                cout<<b+ne<<endl;
            }
            else
            {
                char c = ne[0];
                int mul = ((int) ceil(((float) ne.size())/((float) k)));
                string fi = "";
                fi+=b;
                loop(i,0,mul)
                {
                    fi+=c;
                }
                cout<<fi<<endl;
            }
        }
    }
    return 0;
}

/*
Explain:

*/