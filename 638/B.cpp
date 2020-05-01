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
        arr(a,n);

        set<int> dis;

        loop(i,0,n)
        {
            dis.insert(a[i]);
        }

        if(dis.size()>k){cout<<-1<<endl; continue;}

        else
        {
            vector<int> rep;
            for(auto it : dis)
            {
                rep.push_back(it);
            }


            vector<int> pat(k);

            loop(i,0,k)
            {
                pat[i]=rep[i%rep.size()];
            }

            // loop(i,0,pat.size())
            // {
            //     cout<<pat[i]<<" ";
            // }
            // cout<<endl;

            cout<<n*k<<endl;
            loop(i,0,n)
            {
                loop(j,0,k)
                {
                    cout<<pat[j]<<" ";
                }
            }
            cout<<endl;
        }
        

    }
    return 0;
}

/*
Explain:

*/