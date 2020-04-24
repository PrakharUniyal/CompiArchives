#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=m;i>n;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    str(s);
    replace(s.begin(),s.end(),'.',' ');
    vector<string> name;
    stringstream ss(s);
    string temp;
    while(ss >> temp) {name.push_back(temp);}

    if(1<=name[0].size()<=8 && 1<=name[name.size()-1].size()<=3)
    {
        loop(i,1,name.size()-1)
        {
            if(name[i].size<5)
            {
                name[i-1]+=name[i].substr(0,name[i].size()-1);
                name[i] = name[i].substr(name[i].size()-1,1);
            }
            else
            {
                name[i-1]+=name[i].substr(0,name[i].size()-1);
                name[i] = name[i].substr(name[i].size()-1,1);
            }
            
        }
    }
    return 0;
}

/*
Explain:

*/