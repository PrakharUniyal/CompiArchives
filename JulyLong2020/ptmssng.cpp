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
        vector<int> x(4*n-1),y(4*n-1);
        loop(i,0,4*n-1)
        {
            cin>>x[i]>>y[i];
        }

        map<int,int> mx,my;

        loop(i,0,4*n-1)
        {
            mx[x[i]]++;
            my[y[i]]++;
        }

        int h,k;
        for(auto it : mx)
        {
            if(it.second%2){h=it.first; break;}
        }
        for(auto it : my)
        {
            if(it.second%2){k=it.first; break;}
        }

        cout<<h<<" "<<k<<endl;
    }
    return 0;
}

/*
Explain:
As the vertices do not coincide the set of all coordinates should be such that for each co-ordinate there will be an even number of corresponding vertices.
So make a map and store number of vertices corresponding to each coordinate (both x and y).
The ones with odd number of vertices will be the coordinates of the missing vertex.
*/