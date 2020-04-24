#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    int n;
    cin>>n;
    
    int cnt=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) cnt++;
    }
    
    cout<<cnt<<endl;
    
    return 0;
}