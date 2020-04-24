#include <bits/stdc++.h>
using namespace std;
#define li long long

li MAX=1000000001;

int main() {
	li n,x,y;
	cin>>n>>x>>y;
	li mini;
	
	vector<li> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
	    mini=MAX;
	    for(int j=max(i-x,0LL);j<min(i+y+1,n);j++) if(a[j]<mini) mini=a[j];
	    if(mini==a[i]) {cout<<i+1<<endl; return 0;}
	}
	
	return 0;
}