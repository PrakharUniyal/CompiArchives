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
        queue<pair<int,int>> q;
        vector<pair<int,int>> v;
        q.push(make_pair(n,(n-1)/2));

        while(!q.empty())
        {
            pair<int,int> p = q.front();
            // cout<<p.first<<" "<<p.second<<" : ";
            int n1 = (p.first-1)/2;
            int pos1 = p.second - n1 + (n1-1)/2;
            int n2 = ceil((float)(p.first-1)/2.0);
            int pos2 = p.second + 1 + (n2-1)/2;
            
            // cout<<n1<<" "<<pos1<<" "<<n2<<" "<<pos2<<" "<<endl;

            if(n1!=0){q.push(make_pair(n1,pos1));}
            if(n2!=0){q.push(make_pair(n2,pos2));}
            q.pop();
            v.push_back(make_pair(-1*p.first,p.second));
        }
        sort(v.begin(),v.end());

        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        //     // v.push_back(make_pair(0,i));
        // }


        vector<int> ans(n,0);

        loop(i,0,n)
        {
            ans[v[i].second]=i;
        }

        loop(i,0,n)
        {
            cout << 1+ans[i]<<" ";
        }
        cout<<endl;



    }
    return 0;
}

/*
Explain:

*/