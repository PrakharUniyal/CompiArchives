#include <bits/stdc++.h>
using namespace std;
#define li long long
#define mo %1000000007

int time(string s)
{
    int ans=0;
    ans=((10*(s[3]-'0')+(s[4]-'0')) + 60*(10*(s[0]-'0')+(s[1]-'0')));
    return ans;
}

int main() {
	int t; cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int t=0;
	    for(int i=0;i<n;i++)
	    {
            string s,e;
            cin>>s>>e;
            t+=time(e)-time(s);
	    }
	    if(t>=m*60){cout<<"YES"<<endl;}
	    else{cout<<"NO"<<endl;}
	}
	return 0;
}