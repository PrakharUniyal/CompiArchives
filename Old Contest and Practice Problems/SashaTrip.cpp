#include <iostream>
using namespace std;

int main() {
	int n,v;
	cin>>n>>v;
	
	if (v<n-1) cout<<(v-1+((n-v)*(n-v+1)/2))<<endl;
	else cout<<n-1<<endl;
	return 0;
}