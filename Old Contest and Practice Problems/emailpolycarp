#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n>0)
	{
	    string s,t;
	    cin>>s;
	    cin>>t;
	    
	    vector<char> key;
	    key.push_back(s[0]);
	    vector<int> ind;
	    ind.push_back(0);
	    
	    int k=0;
	    for(int i=1;i<s.size();i++)
	    {
	        if (s[i]!=key[k])
	        {
	            ind.push_back(i);
	            key.push_back(s[i]);
	            k++;
	        }
	    }
	    
	    ind.push_back(s.size());
	    for(int i=0;i<ind.size()-1;i++) ind[i]=ind[i+1]-ind[i];
	    ind.pop_back();
	    
	    vector<char> keyn;
	    keyn.push_back(t[0]);
	    vector<int> indn;
	    indn.push_back(0);
	    
	    k=0;
	    for(int i=1;i<t.size();i++)
	    {
	        if (t[i]!=keyn[k])
	        {
	            indn.push_back(i);
	            keyn.push_back(t[i]);
	            k++;
	        }
	    }
	    
	    indn.push_back(t.size());
	    for(int i=0;i<indn.size()-1;i++) indn[i]=indn[i+1]-indn[i];
	    indn.pop_back();
	    
	   // for(int i=0;i<ind.size();i++) cout<<ind[i]<<" ";
	   // cout<<endl;
	   // for(int i=0;i<indn.size();i++) cout<<indn[i]<<" ";
	   // cout<<endl;
	   // for(int i=0;i<key.size();i++) cout<<key[i]<<" ";
	   // cout<<endl;
	   // for(int i=0;i<keyn.size();i++) cout<<keyn[i]<<" ";
	   // cout<<endl;
	    
	    if (key.size()!=keyn.size())
	    {
	        cout<<"NO"<<endl;
	        n--;
	        continue;
	    }
	    
	    
	    
	    bool flag1=false;
	    for(int i=0;i<keyn.size();i++)
	    {
	        if (key[i]!=keyn[i])
	        {
	            flag1=true;
	        }
	    }
	    if(flag1)
	    {
	        cout<<"NO"<<endl;
	        n--;
	        continue;
	    }
	    
	    
	    bool flag2=false;
	    for(int i=0;i<indn.size();i++)
	    {
	        if (ind[i]>indn[i]) flag2=true;
	    }
	    if (flag2)
	    {
	        cout<<"NO"<<endl;
	        n--;
	        continue;
	    }
	    
	    
	    cout<<"YES"<<endl;
	    n--;
	}
	return 0;
}