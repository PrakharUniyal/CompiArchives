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
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int t;
    cin>>t;
    for(int x = 1; x<=t; x++)
    {
        num(n);
        str(I);
        str(O);

        vector<vector<pair<int,int>>> sw(n);
        loop(i,0,n)
        {
            if(I[i]=='N' || O[i]=='N')
            {
                loop(j,0,i){sw[j].push_back(make_pair(i+1,1)); sw[j].push_back(make_pair(n,-1));}
                loop(j,i+1,n){sw[j].push_back(make_pair(0,1)); sw[j].push_back(make_pair(i,-1));}
            }

            if(I[i]=='N')
            {
                loop(j,0,n){sw[j].push_back(make_pair(i,1)); sw[j].push_back(make_pair(i+1,-1));}
            }

            if(O[i]=='N')
            {
                sw[i].push_back(make_pair(0,1)); sw[i].push_back(make_pair(n,-1));
            }
        }

        loop(i,0,n)
        {
            sort(sw[i].begin(),sw[i].end());
        }

        vector<vector<char>> res(n,vector<char> (n,'Y'));

        loop(i,0,n)
        {
            if(sw[i].size()>0)
            {
                int c = 0,st = 0;
                loop(j,0,n)
                {
                    while(j==sw[i][c].first) {st+=sw[i][c].second; c++;}
                    if(st>0){res[i][j]='N';}
                }
            }
        }

        loop(i,0,n)
        {
            res[i][i]='Y';
        }

        cout<<"Case #"<<x<<":"<<endl;
        loop(i,0,n)
        {
            loop(j,0,n)
            {
                cout<<res[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}

/*
Explain:



*/