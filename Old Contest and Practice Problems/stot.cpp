#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;cin>>q;
	while(q>0)
	{
	    string s,t,p;
	    cin>>s>>t>>p;
	    
	    vector<char> rem;
	    int k=0;
	    for(int i=0;i<t.size();i++)
	    {
	        if (t[i]==s[k]  && k<s.size()) k++;
	        else rem.push_back(t[i]);
	    }
	    if (k!=s.size()) cout<<"NO"<<endl;
	    else
	    {
	        vector<char> pr;
	        for(int i=0;i<p.size();i++) {pr.push_back(p[i]);}
	        int f=0;
	        for(int i=0;i<rem.size();i++)
	        {
	            vector<char>::iterator it = std::find(pr.begin(), pr.end(), rem[i]);
	            if (it==pr.end())
	            {
	                cout<<"NO"<<endl;
	                f=1;
	                break;
	            }
	            else
	            {
	                pr[it-pr.begin()]='_';
	            }
	        }
	        if(f==0) cout<<"YES"<<endl;
	    }
	    q--;
	}
	return 0;
}