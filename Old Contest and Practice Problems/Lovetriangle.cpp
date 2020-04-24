#include <bits/stdc++.h>
using namespace std;
#define tests(t) \
    int t;       \
    cin >> t;    \
    while (t--)
#define num(n) \
    int n;     \
    cin >> n
#define str(s) \
    string s;  \
    cin >> s
#define arr(a, n)               \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }

int main()
{
    num(n);
    arr(f, n);

    bool fl = false;
    for (int i = 0; i < n; i++)
    {
        if (f[f[f[i] - 1] - 1] - 1 == i)
        {
            cout << "YES" << endl;
            fl = true;
            break;
        }
    }
    if (!fl)
    {
        cout << "NO" << endl;
    }
}
