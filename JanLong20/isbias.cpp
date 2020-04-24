#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    num(q);

    arr(a,n);

    int sgn[n];
    for(int i=1;i<n;i++) {if(a[i]<a[i-1]){sgn[i-1]=-1;} else if(a[i]>a[i-1]){sgn[i-1]=1;} else {sgn[i-1]=0;}}
    sgn[n-1]=2;

    int trx[n];
    for(int i=0;i<n;i++){trx[i]=0;}
    vector<int> trxp;
    if(sgn[1]==0){trxp.push_back(0); trx[0]=1;}
    for(int i=2;i<n-1;i++) {if(sgn[i]==0 && sgn[i-1]!=0 && sgn[i-1]!=sgn[i-2]) {trxp.push_back(i-1); trx[i-1]=1;}}
    for(int i=0;i<n-3;i++) {if(sgn[i]==0 && sgn[i+1]!=0 && sgn[i+1]!=sgn[i+2]) {trxp.push_back(i+1); trx[i+2]=-1;}}
    if(sgn[n-2]==0){trxp.push_back(n-1);trx[n-1]=-1;}    
    for(int i=1;i<n-2;i++) {if(sgn[i]!=0 && sgn[i-1]*sgn[i+1]==0){trx[i]=2;}}

    loop(i,trxp.size()){sgn[trxp[i]]=0;}
    
    int seq[n-1];
    vector<vector<int>> mag;
    mag.push_back({0,0,0});
    int k=0;
    for(int i=1;i<n;i++)
    {seq[i-1]=k; if(sgn[i-1]!=sgn[i]) {mag.push_back(mag[k]); k++; if(sgn[i-1]==-1){mag[k][0]++;} else if(sgn[i-1]==1){mag[k][1]++;} else {mag[k][2]++;}}}

    loop(i,q)
    {
        num(l);num(r);
        l--;r--;

        int gr= mag[seq[r-1]+1][0]-mag[seq[l]][0];
        int le= mag[seq[r-1]+1][1]-mag[seq[l]][1];
        int eq= mag[seq[r-1]+1][2]-mag[seq[l]][2];

        if(sgn[l]!=0 && sgn[l+1]==0 && trx[l]==0){if(sgn[l]==1){le--;}else{gr--;}}
        if(sgn[r-1]!=0 && sgn[r-2]==0 && trx[r]==0){if(sgn[r-1]==1){le--;}else{gr--;}}

        if(trx[l]==-1) {if(sgn[l]==1){le++;} else {gr++;}}

        if(trx[r]==1) {if(sgn[r-1]==1){le++;} else {gr++;}}

        if(gr-le){cout<<"NO\n";}
        else {cout<<"YES\n";}
    }

    return 0;
}
