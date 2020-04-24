#include <bits/stdc++.h>
using namespace std;
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define num(n)   \
    long long n; \
    cin >> n
#define str(s) \
    string s;  \
    cin >> s
#define arr(a, n)                     \
    vector<long long> a(n);           \
    for (long long i = 0; i < n; i++) \
    {                                 \
        cin >> a[i];                  \
    }
#define aout(a, i)                     \
    for (int i = 0; i < a.size(); i++) \
    {                                  \
        cout << a[i] << " ";           \
    }                                  \
    cout << endl
#define loop(i, m, n) for (long long i = m; i < n; i++)
#define rloop(i, m, n) for (long long i = n - 1; i >= m; i--)
#define de(n) cout << n << endl
#define ok                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL)

int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    test(t)
    {
        num(n);
        arr(a, n);

        vector<int> ev;
        vector<int> de;

        ev.push_back(-1);
        de.push_back(0);

        loop(i, 0, n)
        {
            if (a[i] % 2 == 0)
            {
                ev.push_back(i);
                de.push_back(a[i] % 4);
            }
        }

        ev.push_back(n);
        de.push_back(0);

        int ans = 0LL;
        loop(i, 1, ev.size() - 1)
        {
            if (de[i] == 2)
            {
                ans += (ev[i] - ev[i - 1]) * (ev[i + 1] - ev[i]);
            }
        }

        int tot = n*(n+1)/2;
        ans = tot - ans;

        cout << ans << endl;
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
*/