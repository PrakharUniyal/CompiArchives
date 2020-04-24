#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    
    int n; cin>>n;
    
    vector<int> a(n);
    
    int p=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    
    if(p) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}