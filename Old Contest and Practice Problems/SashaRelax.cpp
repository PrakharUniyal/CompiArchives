#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int ans=0;
	
	int seq[n];
	int xo[n+1];
	
	int num[1000000];
	for(int i=0;i<1000000;i++) num[i]=0;
	
	xo[0]=0;
	num[0]=1;
	
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&seq[i]);
	    xo[i+1]= xo[i] ^ seq[i];
	    
	    if(num[xo[i+1]]==0)
	    {
	        num[xo[i+1]]+=i+2;
	    }
	    
	    else
	    {
	        num[xo[i+1]]+=i+2;
	        
	        if(num[xo[i+1]]%2==0 && num[xo[i+1]]!=0)
	        {
	            ans++;
	            num[xo[i+1]]=0;
	        }
	        
	    }
	}
	
	cout<<ans<<endl;
	return 0;
}