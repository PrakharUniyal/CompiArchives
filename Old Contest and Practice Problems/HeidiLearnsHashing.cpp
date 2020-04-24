#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;cin>>r;
    
    if (r%2==0) cout<<"NO"<<endl;
    else
    {
        if (r<5) cout<<"NO"<<endl;
        else
        {
            cout<<1<<" "<<(r-3)/2<<endl;
        }
    }
}