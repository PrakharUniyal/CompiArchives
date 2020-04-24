#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Int long long int
#define f(i,x,y) for(int i=x; i<y; i++)
#define fl(i,x,y) for(Int i=x; i<y; i++)
#define vi vector<Int>
#define vvi vector< vi >
#define sort(v) sort(v.begin(),v.end());
#define pb push_back
template <typename T>T gcd(T x,T y){return y==0?x:gcd(y,x%y);}
template <typename T>T lcm(const T &a,const T &b){return (a*b)/gcd(a,b);}
Int MOD = 1000000007;

//#define si set<Int>
//#define msi multiset<Int>
//#define si_d set<Int, greater<Int> >
//#define mii map<Int,Int>
//#define msi_it multiset<Int> :: iterator
//#define si_it set<Int> :: iterator
//#define F first
//#define S second
//#define foreach(i,a) for(__typeof((a).begin()) i =(a).begin(); i != (a).end(); ++i)

int main(){
	ios;
	int x,y,z,a,b,c;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	bool flag=true;
	
	if(a>=x)
	{
	    if((a-x)+b>=y)
	    {
	        if((a+b-x-y)+c>=z)
	        {
	            flag=false;
	        }
	    }
	}
	
	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}