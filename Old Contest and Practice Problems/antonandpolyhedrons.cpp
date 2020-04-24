#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    int n,f=0;
    cin>>n;
    
    map<char,int> val;
    val.insert(make_pair('T',4));
    val.insert(make_pair('C',6));
    val.insert(make_pair('O',8));
    val.insert(make_pair('D',12));
    val.insert(make_pair('I',20));
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        
        f+=val[s[0]];
    }
    
    cout<<f<<endl;
    return 0;
}