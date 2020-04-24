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
        vector<vector<int>> mat;
        loop(i,0,9)
        {
            vector<int> row(9);
            string s;
            cin>>s;
            loop(j,0,9)
            {
                row[j] = s[j]-'0';
            }
            mat.push_back(row);
        }

        // vector<int> col = {0,4,8,1,5,6,2,3,7};

        // vector<int> val;

        // loop(i,0,9)
        // {
        //     val.push_back(mat[i][col[i]]);
        //     // cout << mat[i][col[i]] << " ";
        // }
        // // cout<<endl;

        // vector<int> cval;
        // loop(i,0,9){cval.push_back(val[(i+1)%9]);}

        // loop(i,0,9)
        // {
        //     mat[i][col[i]] = cval[i];
        // }

        loop(i,0,9)
        {
            loop(j,0,9)
            {
                if(mat[i][j]==1){mat[i][j]=9;}
                cout<<mat[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

/*
Explain:
6-   5   4   8   7   3   2   9   6
3   8   6   5   1-   2   7   1   4
7   2   9   6   4   1   8   3   9-
8   5-   3   7   2   5   1   4   9
9   7   5   3   1   6-   6   2   8
4   1   2   9   6   8   4-   5   7
6   3   3-   4   5   7   9   8   2
5   9   8   1-   3   6   4   7   1
2   4   7   1   8   9   5   2-   3
*/