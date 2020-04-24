#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	while(n>0)
	{
		long long k,x;
		cin>>k>>x;
		
		cout<<9*(k-1)+x<<endl;

		n--;
	}
	return 0;
}