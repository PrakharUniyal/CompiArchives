#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    
    vector<int> l(n);
    vector<pair<bool,pair<int,int>>> rp;
    loop(k,n)
    {
        cin>>l[k];
        arr(temp,l[k]);
        
        bool as=false;
        for(int j=1;j<l[k];j++){if(temp[j]>temp[j-1]) {as=true; break;}}
        rp.push_back(make_pair(as,make_pair(temp[0],temp[l[k]-1])));
        //cout<<l[k]<<" "<<rp[k].first<<" "<<rp[k].second.first<<" "<<rp[k].second.second<<endl;
    }
    
    int pos[(int) 1e6+1];
    loop(i,1e6+1){pos[i]=0;}
    
    int k=0;
    for(auto i : rp)
    {
        if(i.first) {k++;}
        else {pos[i.second.second]++;}
    }

    for(int i=1;i<1e6+1;i++){pos[i]+=pos[i-1];}
    
    int x=0;
    for(auto i : rp) {if(!i.first) {if(i.second.first!=0){x+=pos[i.second.first-1];}}}
    
    cout<<k*(2*n-k)+x<<endl;
    return 0;
}
