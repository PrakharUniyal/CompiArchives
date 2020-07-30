#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define ek first
#define do second
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    num(n);
    arr(a,n);
    arr(b,n);

    vector<set<int>> parents(n);
    loop(i,0,n) {if(b[i]!=-1){parents[b[i]-1].insert(i);}}

    stack<int> after;
    vector<bool> visited(n);

    vector<int> ans;
    int ans_val=0;
    loop(j,0,n)
    {
        if(!visited[j])
        {
            int i = j;
            while(parents[i].size()==0)
            {
                if(a[i]>0)
                {
                    ans_val+=a[i];
                    ans.push_back(i+1);
                    visited[i]=1;

                    if(b[i]!=-1)
                    {
                        a[b[i]-1]+=a[i];
                        int ind  = i;
                        i=b[i]-1;
                        // cout<<ind+1<<"->"<<i+1<<endl;
                        // for(auto it: parents[i]){cout<<it<<" ";}cout<<endl;
                        // cout<<ind<<endl;
                        parents[i].erase(ind);
                        // for(auto it: parents[i]){cout<<it<<" ";}cout<<endl;
                    }
                    else {break;}
                }
                else
                {
                    after.push(i+1);
                    visited[i]=1;
                    if(b[i]!=-1)
                    {
                        int ind  = i;
                        i=b[i]-1;
                        parents[i].erase(ind);
                    }
                    else {break;}   
                }
            }

        }
    }

    while (!after.empty())
    {
        ans.push_back(after.top());
        ans_val+=a[after.top()-1];
        after.pop();
    }
    

    de(ans_val);
    aout(ans,i);


    return 0;
}

/*
Explain:

*/