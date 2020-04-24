#include <bits/stdc++.h>
using namespace std;

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Int long long int
#define f(i,x,y) for(int i=x; i<y; i++)
#define fl(i,x,y) for(Int i=x; i<y; i++)
#define vi vector<Int>
#define vvi vector< vi >
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
#define pb push_back
template <typename T>T gcd(T x,T y){return y==0?x:gcd(y,x%y);}
template <typename T>T lcm(const T &a,const T &b){return (a*b)/gcd(a,b);}
Int MOD = 1000000007;

int main()
{
	ios;
	int n;
	cin>>n;

	int seq[]={15,14,12,13,8,9,10,11,0,1,2,3,4,5,6,7};
	cout<<seq[n];
	return 0;
}