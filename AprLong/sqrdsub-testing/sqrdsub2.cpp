#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i, m, n) for (long long i = n-1; i >= m; i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output2.txt");
    test(t)
    {
        num(n);
        arr(a,n);

        vector<int> odd;
        vector<int> ev1;
        vector<int> ev2;

        odd.push_back(0);
        ev1.push_back(0);
        ev2.push_back(0);

        loop(i,0,n)
        {
            if (a[i] % 2)
            {
                odd.push_back(odd[odd.size()-1]+1);
                ev1.push_back(ev1[ev1.size()-1]);
                ev2.push_back(ev2[ev2.size()-1]);
            }
            else
            {
                if (a[i] % 4)
                {
                    odd.push_back(odd[odd.size() - 1]);
                    ev1.push_back(ev1[ev1.size() - 1]+1);
                    ev2.push_back(ev2[ev2.size() - 1]);
                }
                else
                {
                    odd.push_back(odd[odd.size() - 1]);
                    ev1.push_back(ev1[ev1.size() - 1]);
                    ev2.push_back(ev2[ev2.size() - 1]+1);
                }
            }
        }

        int ans = 0;
        loop(i,0,n)
        {
            loop(j,i+1,n+1)
            {
                if(ev1[j]-ev1[i]==1 && ev2[j]-ev2[i]==0){ans++;}
            }
        }

        int tot = n*(n+1)/2;
        ans = tot - ans;
        cout<<ans<<endl;

    }
    return 0;
}

/*
Explain:
Sequence is good if product of its elements is pow(p,2)-pow(q,2) (p and q are integers)
Ai belongs to -pow(10,9),pow(10,9).

Product of cont subseq can belong to -pow(10,9n),pow(10,9n)

It would be good if Product belongs to mod4 class 0,1,3 and not good if belonging to mod4 class 2.

Only those cont. susubseq will be not good where there is one mod4class2 number and rest numbers are odd.
Find all such possible contig subseq and subtract from total possible ones.

-1 a b c d e f

*/