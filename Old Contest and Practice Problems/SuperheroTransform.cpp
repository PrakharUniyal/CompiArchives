#include <iostream>
using namespace std;

int main() {
	string s,t;
	bool flag=true;
	char vowels[5]={'a','e','i','o','u'};
	
	cin>>s;
	cin>>t;
	
	if (s.size()!=t.size())
	{
	    cout<<"No"<<endl;
	}
	
	else{
	for(int i=0;i<s.size();i++)
	{
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            int k;
            for(k=0;k<5;k++)
            {
                if(t[i]==vowels[k]) break;
            }
            if(k==5)
            {
                cout<<s[i]<<t[i];
                flag=false;
            }
	    }
	    
	    else
	    {
	        if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
            {
                flag=false;
            }
	    }
	}
	
	if(flag) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	}
	return 0;
}