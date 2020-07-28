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
#define mp make_pair
#define ek first
#define do second
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
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
        vector<int> p(n),h(n);
        loop(i,0,n){cin>>p[i]>>h[i];}

        vector<pair<pair<int,int>,int>> trees;
        loop(i,0,n)
        {
            trees.push_back(mp(mp(p[i]-h[i],p[i]),0));
            trees.push_back(mp(mp(p[i],p[i]+h[i]),1));
        }

        sort(trees.begin(),trees.end());
        map<int,int> lr,rp;
        int ans = 0;

        loop(i,0,2*n)
        {
            if(trees[i].do)
            {
                int seg_len = trees[i].ek.do-trees[i].ek.ek;
                if(rp[trees[i].ek.ek]) {seg_len += rp[trees[i].ek.ek];}
                rp[trees[i].ek.do] = max(rp[trees[i].ek.do], seg_len);
                ans = max(ans,rp[trees[i].ek.do]);
            }
            else
            {
                int seg_len = trees[i].ek.do-trees[i].ek.ek;
                int exa=0,exb=0;
                if(rp[trees[i].ek.ek]) {exa = rp[trees[i].ek.ek];}
                if(lr[trees[i].ek.ek]) {exb = lr[trees[i].ek.ek];}
                seg_len+=max(exa,exb);
                lr[trees[i].ek.do] = max(lr[trees[i].ek.do], seg_len); 
                ans = max(ans,lr[trees[i].ek.do]);
            }
        }

        cout<<"Case #"<<x<<": ";
        de(ans);

    }
    return 0;
}

/*
Explain:



*/