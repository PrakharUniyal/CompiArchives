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
    
    int c = 0;
    
    int den[5] = {1,5,10,20,100};
    
    for(int i=4;i>-1;i--)
    {
        c+= n/den[i];
        n-= den[i]*(n/den[i]);    
    }
    
    cout<<c<<endl;
    
    return 0;
}