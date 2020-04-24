#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	char t;
	bool flag=true;
	
	for(int i=0;i<n;i++)
	{
	    string c;
	    cin>>c;
	    
	    if(i==0) t=c[0];
	    
	    for(int j=0;j<c.size();j++)
	    {
	        if (c[j]!=t)
	        {
	            cout<<1<<endl;
	            flag=false;
	            break;
	        }
	    }
	    
	    if(flag==false) break;
	}
    
    if(flag==true) cout<<n<<endl;
	return 0;
}