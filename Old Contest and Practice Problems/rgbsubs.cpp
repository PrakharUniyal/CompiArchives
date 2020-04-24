#include <bits/stdc++.h>
using namespace std;
#define li long long

char next(char c)
{
    if (c=='R') return 'G';
    if (c=='G') return 'B';
    if (c=='B') return 'R';
}

int main() {
	li t;
	cin>>t;
	while(t--)
	{
	    li n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    
	    li mx=0;
	    li cnt=1;
	    for(int i=1;i<s.size()-k+1;i++)
	    {
	        if(s[i]==next(s[i-1])) {cnt++;}
	        else
	        {
	            mx=max(mx,cnt);
	            cnt=1;
	        }
	    }
	    
	    mx=max(mx,cnt);
	    
	    if (mx>=k) cout<<0<<endl;
	    else cout<<k-mx<<endl;
	}
	return 0;
}