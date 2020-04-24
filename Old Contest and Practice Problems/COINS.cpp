#include <bits/stdc++.h>
#define lli long long
using namespace std;

lli br(lli n,lli *arr)
{
    if(n==0 || n==1) return n;
    if(arr[n]!=0) return arr[n];
    
    arr[n]=max(n,br(n/2,arr)+br(n/3,arr)+br(n/4,arr));
    return arr[n];
}

int main() 
{
	lli t;
	while(cin>>t)
	{
	   lli *arr=new lli[t+1];
       cout<<br(t,arr)<<endl; 
	}
}