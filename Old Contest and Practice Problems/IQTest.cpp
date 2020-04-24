#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;cin>>n;
    int sgn[n];
    
    for(int i=0;i<n;i++){cin>>temp;sgn[i]=temp%2;}
    
    if (sgn[0]!=sgn[1] && sgn[0]!=sgn[n-1]) cout<<1<<endl;
    else{for(int i=1;i<n;i++){if (sgn[i]!=sgn[(i+1)%n] && sgn[i]!=sgn[i-1]){ cout<<i+1<<endl;break;}}}
}