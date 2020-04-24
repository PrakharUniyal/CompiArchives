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
    int i = 1;
    test(t)
    {
        num(n);
        vector<vector<int>> mat;
        loop(i,0,n)
        {
            arr(row,n);
            mat.push_back(row);
        }

        int k=0,r=0,c=0;

        loop(i,0,n){k+=mat[i][i];}

        loop(i,0,n)
        {
            vector<int> chk(n,0);
            loop(j,0,n)
            {
                if(chk[mat[i][j]-1]==0){chk[mat[i][j] - 1]++;}
                else{r++; break;}
            }
        }

        loop(i,0,n)
        {
            vector<int> chk(n,0);
            loop(j,0,n)
            {
                if(chk[mat[j][i]-1]==0){chk[mat[j][i] - 1]++;}
                else{c++; break;}
            }
        }

        cout<<"Case #"<<i<<": "<<k<<" "<<r<<" "<<c<<endl;

        i++;
    }
    return 0;
}
