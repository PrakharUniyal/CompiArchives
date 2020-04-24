#include <bits/stdc++.h>
using namespace std;
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    string table;
    cin>>table;
    
    vector<string> hand(5);
    for(int i=0;i<5;i++)
    {
        cin>>hand[i];
        if(hand[i][0]==table[0] || hand[i][1]==table[1])
        {
            cout<<"YES"<<endl; return 0;
        }
    }
    
    cout<<"NO"<<endl;
    return 0;
    
    
}