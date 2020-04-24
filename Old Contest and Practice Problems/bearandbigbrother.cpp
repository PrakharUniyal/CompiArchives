#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    double a,b;
    cin>>a>>b;

    cout<<(int) floor(1+(log(b/a)/log(3.0/2.0)))<<endl;
    return 0;
}