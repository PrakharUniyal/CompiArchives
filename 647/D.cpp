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
    num(n);
    num(m);
    vector<vector<int>> net(n);

    loop(i,0,m)
    {
        num(a);
        num(b);

        net[a-1].push_back(b-1);
        net[b-1].push_back(a-1);
    }

    arr(t,n);
    set<int> ch(t.begin(),t.end());

    if(ch.size()!=*max_element(t.begin(),t.end())){cout<<-1<<endl;return 0;}
    
    int tot = ch.size();

    bool f = true;
    loop(i,0,n)
    {
        loop(j,0,net[i].size())
        {
            // cout<<i<<net[i][j]<<endl;
            if(t[i]==t[net[i][j]]){f=false; break;}
        }
    }

    if(!f){cout<<-1<<endl;return 0;}

    vector<vector<int>> c(n);

    loop(i,0,n)
    {
        c[t[i]-1].push_back(i);
    }

    bool ff = true;
    loop(i,0,tot)
    {
        set<int> ne;
        loop(j,0,c[i].size())
        {
            loop(k,0,net[c[i][j]].size())
            {
                // cout<<net[c[i][j]][k]+1<<" "<<t[net[c[i][j]][k]]<<endl;
                if(t[net[c[i][j]][k]]>i){ne.insert(t[net[c[i][j]][k]]);}
            }
            // cout<<endl;
        }
        // cout<<"nesize:"<<ne.size()<<endl;
        // cout<<i+1<<": "<<tot<<";; ";
        // for(auto it:ne){cout<<it<<" ";}cout<<endl;
        if(tot-(i+1)>ne.size()){cout<<-1<<endl;ff=false;break;}
    }

    if(ff)
    {
        loop(i,0,n)
        {
            loop(j,0,c[i].size())
            {
                cout<<c[i][j]+1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

/*
Explain:

*/