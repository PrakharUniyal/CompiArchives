#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    string s;
    cin>>s;
    
    int n = s.size();
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a') k++;
    }
    
    if(k>n/2) cout<<n<<endl;
    else cout<<2*k-1<<endl;
}