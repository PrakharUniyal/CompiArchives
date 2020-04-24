#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int h=0,t=0;
    
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        if (s[i]=='1')
        {
            h++;
        }
        else
        {
            t++;
        }
    }
    
    if (h!=t)
    {
        cout<<1<<endl;
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(int i=1;i<n;i++) cout<<s[i];
        cout<<endl;
    }

    
	return 0;
}