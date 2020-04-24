#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
#define int long long
{
    ios;
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int n;
        cin>>n;
        
        vector<int> pows(30);
    
        int temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            pows[log2(temp)]++;
        }
        
        for(int i=0;i<11;i++)
        {
            pows[i+1]+=pows[i]/2;
        }
        
        if(pows[11]>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}