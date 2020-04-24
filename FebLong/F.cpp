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

long long powm(long long k, long long p, long long m) {if (p == 0) {return 1LL;} long long P = powm(k, p / 2LL,m); P = (P * P) % m; if (p % 2 == 1) {P = (P * k) % m;} return P;}
long long minv(long long x, long long m) {return powm(x,m-2,m);}

vector<long long> minEdgeBFS(vector <vector<long long>> tree, long long u, long long n) 
{
    vector<bool> visited(n, 0); 
    vector<long long> distance(n, 0); 
    queue <long long> Q; 
    distance[u] = 0; 
  
    Q.push(u); 
    visited[u] = true; 
    while (!Q.empty()) 
    { 
        long long x = Q.front(); 
        Q.pop(); 
  
        for (long long i=0; i<tree[x].size(); i++) 
        { 
            if (visited[tree[x][i]]) 
                continue; 
  
            distance[tree[x][i]] = distance[x] + 1; 
            Q.push(tree[x][i]); 
            visited[tree[x][i]] = 1; 
        } 
    } 
    return distance; 
} 

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        vector<vector<int>> tree(n);
        loop(i,0,n-1)
        {
            int u,v;
            cin>>u>>v;
            tree[u-1].push_back(v-1);
            tree[v-1].push_back(u-1);
        }

        vector<int> cross;
        loop(i,0,n){if(tree[i].size()>2){cross.push_back(i);}}

        arr(sp,n);
        vector<int> spl;
        loop(i,0,n){if(sp[i]==1){spl.push_back(i);}}

        vector<vector<int>> amat(n);
        loop(i,0,n)
        {
            vector<int> arow;
            arow = minEdgeBFS(tree,i,n);
            amat[i]=arow;
        }

        int ans = 0;

        loop(i,0,spl.size())
        {
            loop(j,i+1,spl.size())
            {
                loop(k,j+1,spl.size())
                {
                    if(amat[spl[i]][spl[j]]==amat[spl[j]][spl[k]] && amat[spl[j]][spl[k]]==amat[spl[k]][spl[i]] && amat[spl[k]][spl[i]]==amat[spl[i]][spl[j]])
                    {
                        ans+=6;
                    }
                }
            }
        }

        // loop(i,0,n){loop(j,0,n){cout<<amat[i][j]<<" ";}cout<<endl;}

        // vector<vector<int>> frqmat;
        // loop(i,0,cross.size())
        // {
        //     vector<int> frq(n,0);
        //     loop(j,0,spl.size())
        //     {
        //         frq[amat[cross[i]][spl[j]]]++;
        //     }
        //     frqmat.push_back(frq);
        // }

        // int ans = 0;
        // loop(i,0,frqmat.size())
        // {
        //     int cc = 0;
        //     loop(j,0,n)
        //     {
        //         if(frqmat[i][j]>2)
        //         {
        //             int num = frqmat[i][j];
        //             cc+= num*(num-1)*(num-2);
        //         }
        //     }
        //     ans+=cc;
        // }

        cout<<ans<<endl;
        
    }
    return 0;
}
