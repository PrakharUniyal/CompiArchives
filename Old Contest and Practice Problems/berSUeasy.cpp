#include <bits/stdc++.h>
using namespace std;

int arraySum(vector<int> &v)  
{ 
    int initial_sum  = 0;  
    return accumulate(v.begin(), v.end(), initial_sum); 
} 

int main() {
	int n,M;
	cin>>n>>M;
	
	int arr[n];
	int sar[n];
	cin>>arr[0];
	sar[0]=arr[0];
	for(int i=1;i<n;i++)
	{
	    cin>>arr[i];
	    sar[i]=arr[i]+sar[i-1];
	}
	
	int k=0;
	while(sar[k]<=M) 
	{
	    cout<<0<<" ";
	    k++;
	}
	
	vector<int> dig;
	for(int i=0;i<k;i++) dig.push_back(arr[i]);
	
	while(dig.size()<n)
	{
	    sort(dig.begin(),dig.end());
	    
	    int s=arraySum(dig),i=0;
	    while(M-arr[k]<s)
	    {
	        s-=dig[k-1-i];
	        i++;
	    }
	    
	    cout<<i<<" ";
	    dig.push_back(arr[k]);
	    k++;
	}
	
	
	return 0;
}