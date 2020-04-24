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

//Code for Prime Factorization.
#define MAXN   10000001 
int spf[MAXN]; 
void makespf(){spf[1]=1;for(int i=2; i<MAXN; i++){spf[i] = i;}for(int i=4; i<MAXN; i+=2){spf[i] = 2;}for (int i=3; i*i<MAXN; i++){if(spf[i] == i){for(int j=i*i; j<MAXN; j+=i){if(spf[j]==j){spf[j] = i;}}}}} 
vector<long long> prime_factors(long long x){vector<long long> ret; while (x != 1){ret.push_back(spf[x]); x = x / spf[x];} return ret;} 

//Rotates array towards left.
vector<long long> rotate(vector<long long> arr){vector<long long> brr(arr.size());loop(i,0,arr.size()){brr[i]=arr[(i+1)%arr.size()];}return brr;}

//Align a binary array by rotation so that most ones are on right.
pair<long long,vector<long long> > align(vector<long long> bin_arr)
{
    vector<long long> w_arr(bin_arr.size());
    for(long long i=0;i<w_arr.size();i++){w_arr[i]=i+1;}

    long long big=-1,ind=-1;
    loop(i,0,bin_arr.size())
    {
        long long sm = 0;
        loop(j,0,bin_arr.size()){sm+=bin_arr[j]*w_arr[j];}
        if(sm>big){big=sm;ind=i;}
        bin_arr = rotate(bin_arr);
    }

    loop(i,0,ind){bin_arr = rotate(bin_arr);}
    return make_pair(ind,bin_arr);
}

int main()
#define int long long
{
    //Fast I/O.
    ok;

    //For prime fact..
    makespf();

    //Input
    num(w);
    num(h);
    num(r);
    vector<int> x(r),y(r);
    loop(i,0,r) {cin>>x[i]>>y[i];}

    //Prime Factors of w and h
    vector<int> ww = prime_factors(w);
    vector<int> hh = prime_factors(h);

    //Choosing appropriate n and m
    int n = w/ww[0];
    int m = h/hh[0];
    int wi = 1, hi = 1;
    while(n*m>1024)
    {
        if(ww.size()>wi){n/=ww[wi];wi++;}
        if(hh.size()>hi){m/=hh[hi];hi++;}
    }

    int q = 0;

    vector<vector<int>> mat;
    loop(i,0,m) {vector<int> row(n,0);mat.push_back(row);}
    loop(i,0,r){mat[y[i]*m/h][x[i]*n/w]=1;}

    vector<string> quer;

    // loop(i,0,m){loop(j,0,n){cout<<mat[i][j]<<" ";}cout<<endl;}
    // cout<<endl;

    loop(i,0,n)
    {
        vector<int> col(m);
        loop(j,0,m){col[j]=mat[j][i];}
        pair<int,vector<int> > x = align(col);
        col = x.second;
        loop(j,0,m){mat[j][i]=col[j];}

        if(x.first!=0) {loop(j,0,m-x.first){if(q<=1024) {quer.push_back("2 "+to_string(i+1)); q++;}}}
    }

    loop(i,0,m)
    {
        pair<int,vector<int> > x = align(mat[i]);
        mat[i] = x.second;
        
        if(x.first!=0){loop(j,0,n-x.first){if(q<=1024){quer.push_back("1 "+to_string(i+1));q++;}}}
    }

    cout<<n<<" "<<m<<" "<<q<<endl;
    loop(i,0,q) {cout<<quer[i]<<endl;}
    return 0;
}