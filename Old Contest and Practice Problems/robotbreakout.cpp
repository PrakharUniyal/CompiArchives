#include <bits/stdc++.h>
using namespace std;
#define li long long

li M=100000;
li m=-1*M;


int main() {
	li t;
	cin>>t;
	while(t>0)
	{
	    li L=m,U=M,R=M,D=m;
	    li n;
	    cin>>n;
	    
	    li x[n],y[n],l[n],u[n],r[n],d[n];
	    int flag=0;
	    for(li i=0;i<n;i++) {cin>>x[i]>>y[i]>>l[i]>>u[i]>>r[i]>>d[i];}
	    for(li i=0;i<n;i++)
	    {
            if(l[i]==0) L=max(L,x[i]);
            if(u[i]==0) U=min(U,y[i]);
            if(r[i]==0) R=min(R,x[i]);
            if(d[i]==0) D=max(D,y[i]);
            
            if(L>R || D>U) {flag=1;break;}
	    }
	    
	    if(flag) {cout<<0<<endl;}
	    else cout<<1<<" "<<L<<" "<<D<<endl;
	    t--;
	}
	
	return 0;
}