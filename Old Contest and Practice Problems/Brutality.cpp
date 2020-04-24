#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n,k;
	cin>>n>>k;
	
	long long hit[n];
	for(long long i=0;i<n;i++) cin>>hit[i];
	
	string key;
	cin>>key;
	key+='-';
	
	vector<char> but;
	vector<int> ind;
	long long o=0;
	
	
	for(long long i=1;i<key.size();i++)
	{
	    if(key[i-1]!=key[i])
	    {
            but.push_back(key[i-1]);
            ind.push_back(i-o);
            o+=ind.back();
	    }
	}
	
	long long sum=0;
	o=0;
	
	for(long long i=0;i<ind.size();i++)
	{
	    if(ind[i]>k)
	    {
	        sort(hit+o,hit+o+ind[i]);
	        for(long long j=o+ind[i]-1;j>o+ind[i]-k-1;j--)
	        {
	            sum+=hit[j];
	        }
	    }
	    
	    else
	    {
	        for(long long j=o;j<o+ind[i];j++)
	        {
	            sum+=hit[j];
	        }
	    }
	    
	    o+=ind[i];
	}
	
	cout<<sum<<endl;
	return 0;
}