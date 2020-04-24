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

vector<long long> depth,subsize;

void dfs(int cur, int prev, int _depth, vector<vector<long long>> tree)
{
    depth[cur] = _depth;
    subsize[cur] = 1;
    for (int i = 0; i < tree[cur].size(); i++)
        if (tree[cur][i] != prev)
        {
            dfs(tree[cur][i], cur, _depth + 1,tree);
            subsize[cur] += subsize[tree[cur][i]];
        }
}

int main()
#define int long long
{
    ok;
    num(n);
    num(k);

    loop(i,0,n)
    {
        depth.push_back(0);
        subsize.push_back(0);
    }


    vector<vector<int>> tree(n);

    loop(i,0,n-1)
    {
        num(u);u--;
        num(v);v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(0,-1,0,tree);

    vector<int> fin;
    for(int i=0;i<n;i++)
    {
        fin.push_back(depth[i]-subsize[i]+1);
    }

    sort(fin.begin(),fin.end(),greater<int>());
    
    int ans=0;
    loop(i,0,k)
    {
        ans += fin[i];
    }
    cout<<ans<<endl;

    return 0;
}

/*
n tree

            1
        7   6   2 
    5   3
    4   8
*/