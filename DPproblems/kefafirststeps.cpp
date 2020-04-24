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
    num(n);
    arr(a,n);

    vector<int> bp,ls;
    bp.push_back(-1);
    loop(i,0,n-1){if(a[i+1]<a[i]){ls.push_back(i-bp[bp.size()-1]);bp.push_back(i);}}
    ls.push_back(n - 1 - bp[bp.size() - 1]);
    bp.push_back(n-1);

    cout<<*max_element(ls.begin(),ls.end())<<endl;
    return 0;
}

/*
Explain:
answer(seq,i) = is_last_ndsubseq_longest*is_seq[i]_>=_seq[i-1]*1 + answer(seq,i-1) 
*/