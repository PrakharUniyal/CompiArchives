#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long n,m,k;
	cin>>n>>m>>k;
	
	long long seg[n],dif[n];

	for(long long i=0;i<n;i++)
	{
	    cin>>seg[i];
	    if(i>=1)
	    {
    	    dif[i-1]=seg[i]-seg[i-1];
	    }
	}
	
	dif[n-1]=-1;
	
	for(long long i=0;i<k-1;i++)
	{
	    *max_element(dif , dif + n)=-1;
	}
	
	long long sum=0;
	for(long long i=0;i<n;i++)
	{
	    if(dif[i]==-1) sum++;
	    else sum+=dif[i];
	}
		
	cout<<sum<<endl;
	return 0;
}