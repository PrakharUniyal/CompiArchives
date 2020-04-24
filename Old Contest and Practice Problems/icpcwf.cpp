#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string y;
	char key[10]={'A','B','C','D','E','F','G','H','I','J'};
	map<char, int>::iterator itr;
	
	vector<int> siz;
	map<char,int> subs;
	for(int i=0;i<10;i++){subs.insert(make_pair(key[i],0));}
	
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    
	    for(int j=0;j<s.size();j++){subs[s[j]]++; }
	    
	    if(i==0){ y=s;}
	    siz.push_back(s.size());
	}

// 	for (itr = subs.begin(); itr != subs.end(); ++itr) 
// 	{cout<< itr->first<< '\t' << itr->second << '\n'; } 
	
	int x=siz[0];
	vector <int> pos;
	sort(siz.begin(),siz.end());
	for(int i=0;i<siz.size();i++){if (siz[i]==x) pos.push_back(i);}
	cout<<n-pos[pos.size()-1]<<endl;
	cout<<n-pos[0]<<endl;
	
	for(int i=0;i<y.size();i++){subs[y[i]]=-1;}
	
	int max=0;
	
	for(int i=0;i<10;i++)
	{
	   // cout<<subs[key[i]]<<" ";
	    if (subs[key[i]]>max) {max=subs[key[i]];}
	}
	
	for(int i=0;i<10;i++)
	{
	    if (subs[key[i]]==max) cout<<key[i];
	}
	cout<<endl;
	return 0;
}