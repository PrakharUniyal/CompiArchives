#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        long long n,k;
        cin>>n>>k;
        
        vector<int> l(n),ind;
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
            if(l[i]%2) ind.push_back(i+1);
        }
        
        long long o=ind.size();
        
        if(k>o) cout<<"NO"<<endl;
        else
        {
            if(o%2 ^ k%2) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++) cout<<ind[i]<<" ";
                cout<<n<<endl;
            }
        }
    }
    return 0;
}