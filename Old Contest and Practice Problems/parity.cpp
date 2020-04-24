#include <iostream>
using namespace std;

int main() {
	int b;
	bool flag;
	long long k;
	cin>>b>>k;
	
	int a[k];
	long long eves=0;
	for(long long i=0 ;i<k ;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0) eves++;
	}
	
	if(b%2==0)
	{
	    if(a[k-1]%2==0)
	    {
	        flag=true;
	    }
	    else
	    {
	        flag=false;
	    }
	}
	
	else
	{
	    if(k%2==0)
	    {
	        if(eves%2==0)
	        {
	            flag=true;
	        }
	        else
	        {
	            flag=false;
	        }
	    }
	    
	    else
	    {
	        if(eves%2==0)
	        {
	            flag=false;
	        }
	        else
	        {
	            flag=true;
	        }
	    }
	}
	
	if(flag) cout<<"even"<<endl;
	else cout<<"odd"<<endl;
	return 0;
}