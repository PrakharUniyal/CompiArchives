#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T>0)
    {
        int n,s,t;
        cin>>n>>s>>t;
        
        if (s>=t)
        {
            cout<<n-t+1<<endl;
        }
        else
        {
            cout<<n-s+1<<endl;
        }
        T--;
    }
	return 0;
}