#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Int long long int
#define f(i,x,y) for(int i=x; i<y; i++)
#define fl(i,x,y) for(Int i=x; i<y; i++)
#define vi vector<Int>
#define vvi vector< vi >
//#define sort(v) sort(v.begin(),v.end());
#define pb push_back
template <typename T>T gcd(T x,T y){return y==0?x:gcd(y,x%y);}
template <typename T>T lcm(const T &a,const T &b){return (a*b)/gcd(a,b);}
Int MOD = 1000000007;

int main() {
	int n;
	cin>>n;
	
	int seq[n];
	f(i,0,n) cin>>seq[i];
	
	int sseq[n];
	f(i,0,n) sseq[i]=seq[i];
	
	sort(sseq,sseq+n);
	int max=sseq[n-1];
	int pop;
	
	f(i,1,n)
	{
	    if(sseq[n-1-i]!=max)
	    {
	        pop=i;
	        break;
	    }
	}
	
	if(pop==1)
	{
	    cout<<1<<endl;
	}
	else{
	vi len;
	
	f(i,0,n)
	{
	    if (seq[i]==max)
	    {
	        f(j,0,pop)
	        {
	            if(seq[i+j]!=max)
	            {
	                len.pb(j);
	                break;
	            }
	        }
	    }
	    
	}
	
	sort(len.begin(),len.end());
	
	cout<<len[len.size()-1]<<endl;
	}
	return 0;
}