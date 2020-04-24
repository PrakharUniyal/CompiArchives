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
	
	int mac[n];
	f(i,0,n) cin>>mac[i];
	
	sort(mac,mac+n);
	
	f(i,0,n-1)
	{
	    if (mac[n-1-i]%mac[0]!=0)
	    {
	        continue;
	    }
	    else 
	    {
	        f(j,2,sqrt(mac[n-1-i]/mac[0])+1)
	        {
	            if ((mac[n-1-i]%j)==0 && mac[n-1-i]/j>mac[0])
	            {
	                mac[n-1-i]/=j;
	                mac[0]*=j;
	                break;
	            }
	        }
	    }
	}
	
	int sum=0;
	f(i,0,n) sum+=mac[i];
	
	cout<<sum<<endl;
	return 0;
}