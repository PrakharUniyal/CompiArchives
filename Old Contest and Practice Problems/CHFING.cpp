#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long m=1000000007;
    
    while(t>0)
    {
        long long n,k;
        cin>>n>>k;
        
        long long d=(k-1)/(n-1),m=(k-1)%(n-1);
        
        cout<<(n-1)*(d*(d+1)/2) + (d+1)*(m)<<endl;
        t--;
    }
    
	return 0;
}