#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i, m, n) for (long long i = m; i > n; i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    num(n);
    num(m);
    arr(a,n);
    arr(l,m);

    vector<int> occured(1e5+1,0);
    vector<int> dist(n);

    int k = 0;
    rloop(i,n-1,-1)
    {
        if(occured[a[i]]==0){occured[a[i]]=1;k++;}
        dist[i]=k;
    }

    loop(i,0,m) {de(dist[l[i]-1]);}
    return 0;
}

/*
Explain:
Starting from the back of array, track all the numbers that are occuring and keep incrementing the count of unique numbers accordingly.
*/