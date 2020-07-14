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

        map<int,int> res;
        loop(i,0,n) {res[(a[i]%k)]++;}

        int f = 0;
        for(auto it : res) {if(it.first!=0){f = max(f,k*(it.second)-it.first+1);}}

        de(f);
    }
    return 0;
}

/*
Explain:
1: ai->ai+x && x->x+1 (Once for each ai)
2: x->x+1

Answer is a function of max elements belonging to a residue class except class 0.
Precise Function: (k*res[c] - c + 1)
k is given, c is the residue class with max elements, res[i] is number of elements belonging to residue class i
*/