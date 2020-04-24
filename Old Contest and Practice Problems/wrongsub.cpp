#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    
    int n,k; cin>>n>>k;
    
    for(int i=0;i<k;i++)
    {
        if(n%10) n--;
        else n/=10;
    }
    
    cout<<n<<endl;
}