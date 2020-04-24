#include <bits/stdc++.h>
#define lli long long
using namespace std;

void clr(lli *arr, lli n)
{
	for(lli i=0;i<n;i++) arr[i]=0;
}

lli sum(lli *arr, lli n)
{
	lli s=0;
	for(lli i=0;i<n;i++) s+=arr[i];
	return s;
}

void p(lli *arr, lli n)
{
	for(lli i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	lli n,k;
	cin>>n>>k;

	lli *ts = new lli[n];
	clr(ts,n);
	string c;
	for(lli i=0;i<k;i++)
	{
		cin>>c;
		if (c[2]=='I')
		{
		    lli n;
		    cin>>n;
		    ts[n-1]^=1;
		} 
		else clr(ts,n);
		cout<<sum(ts,n)<<endl;
	}
	
	return 0;
}