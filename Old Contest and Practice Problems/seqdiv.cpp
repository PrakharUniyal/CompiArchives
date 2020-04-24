#include <iostream>
using namespace std;

int main() {
	int q;
	cin>>q;

	while(q>0)
	{
		int n;
		cin>>n;

		string seq;
		for(int i=0;i<n;i++) cin>>seq[i];

		if (n==2)
		{
			if(seq[0]>=seq[1]) cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl<<2<<endl;
				cout<<seq[0]<<" "<<seq[1]<<endl;
			}
		}

		else
		{
			cout<<"YES"<<endl<<2<<endl;
			cout<<seq[0]<<" ";
			for(int i=1;i<n;i++) cout<<seq[i];
			cout<<endl;
		}

		q--;
	}
	return 0;
}