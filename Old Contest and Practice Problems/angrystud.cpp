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
    num(t);
    while(t--)
    {
        num(n);
        str(s);

        vector<int> ax;
        for(int i=0;i<n;i++) {if(s[i]=='A'){ax.push_back(i);}}

        if(ax.size()==0){cout<<0<<endl; continue;}
        
        ax.push_back(n);

        vector<int> m;
        for(int i=0;i<ax.size()-1;i++) {m.push_back(ax[i+1]-ax[i]-1);}

        cout<<*max_element(m.begin(),m.end())<<endl;
    }
    
    return 0;
}
