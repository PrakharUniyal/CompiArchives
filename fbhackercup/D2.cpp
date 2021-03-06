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
#define INT_M 1e18+1
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
  
// void DFS(vector<vector<int>> v, vector<bool> &vis, int a, int b, vector<int> &stak) 
// { 
//     stak.push_back(a); 
//     if (a == b) {return;}
//     vis[a] = true; 
//     int flag = 0; 
//     if (!v[a].empty()) { 
//         for (int j = 0; j < v[a].size(); j++) { 
//             if (vis[v[a][j]] == false) { 
//                 DFS(v, vis, v[a][j], b, stak); 
//                 flag = 1; 
//             }
//         }
//     }
//     if (flag == 0) {stak.pop_back();}
// } 
  
// vector<int> path(int a, int b, vector<vector<int>> v, int n) 
// { 
//     vector<bool> vis(n + 1,false); 
//     vector<int> stak;
//     DFS(v, vis,a, b, stak);
//     return stak;
// } 

int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int t; cin>>t;
    for(int x = 1; x<=t; x++)
    {
        num(n);
        num(m);
        num(a);
        num(b);

        vector<int> p(n),c(n);
        loop(i,0,n) {cin>>p[i]>>c[i];}

        vector<int> apath,bpath;
        int ai=a,bi=b;
        while(ai!=0) {apath.push_back(ai); ai = p[ai-1];}
        while(bi!=0) {bpath.push_back(bi); bi = p[bi-1];}
        aout(apath,i); aout(bpath,i);

        reverse(apath.begin(),apath.end());
        reverse(bpath.begin(),bpath.end());
        int common_anc, ind = 0;
        while(apath[ind]==bpath[ind]) {ind++;}
        common_anc = apath[ind-1];
        de(common_anc);

        vector<int> cs;
        bool st = false;
        reverse(bpath.begin(), bpath.end());
        loop(i,0,bpath.size()) {if(bpath[i]==common_anc) {break;} cs.push_back(bpath[i]);}
        loop(i,0,apath.size()) {if(apath[i]==common_anc){st=true;} if(st){cs.push_back(apath[i]);}}
        reverse(cs.begin(),cs.end());
        aout(cs,i);
        
        vector<int> cc(cs.size());
        loop(i,0,cs.size()) {cc[i] = c[cs[i]-1];}

        multiset<int> ms;
        vector<int> dp(n);

        int ans = 0;
        dp[0]=0;
        ms.insert(0);

        loop(i,1,n)
        {
            if (ms.size() > m) {ms.erase(ms.lower_bound(dp[i-m-1]));}
            // cout<<i<<": "; for(auto it: ms){cout<<it<<" ";}de(endl);
            ans = *ms.begin();
            dp[i]=ans+c[i];
            if(cc[i]==0){dp[i]=INT_M;}
            ms.insert(dp[i]);
            if(*ms.begin()==INT_M) {ans = -1; break;}
        }

        cout<<"Case #"<<x<<": ";
        de(ans);
    }
    return 0;
}

/*
Explain:



*/