#include <bits/stdc++.h>
using namespace std;
#define li long long
#define mo %1000000007

int main() {
	int t; cin>>t;
	
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    int cas;
	    for(int i=0;i<q;i++)
	    {
	        cin>>cas;
	        if(cas==1)
	        {
	            int p,v;
	            cin>>p>>v;
	            a[p-1]=v;
	        }
	        else
	        {
	            set<int> uni;
	            for(int i=0;i<n;i++){if(a[i]!=0) {uni.insert(a[i]);}}
	            cout<<uni.size()<<endl;
	        }
	    }
	}
	return 0;
}