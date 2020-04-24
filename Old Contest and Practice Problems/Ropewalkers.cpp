#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>> a>>b>>c>>d;
	
	int arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	
	sort(arr,arr+3);
	
	int x,y;
	x=arr[1]-arr[0];
	y=arr[2]-arr[1];
	
	if (x>=d && y>=d)
	{
	    cout<<0<<endl;
	}
	
	else if(x>=d && y<d)
	{
	    cout<<(d-y)<<endl;
	}
	
	else if (y>=d && x<d)
	{
	    cout<<(d-x)<<endl;
	}
	
	else
	{
	    cout<<(d+d-x-y)<<endl;
	}
	return 0;
}