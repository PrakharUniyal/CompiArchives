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

int main(){
    ios;
    
    int t;
    cin>>t;
    
    while(t>0)
    {
        int n;
        cin>>n;
        
        int a[n],d[n],s[n];
        
        f(i,0,n) cin>>a[i];
        f(i,0,n) cin>>d[i];
        
        f(i,0,n)
        {
            s[i]=d[i]-(a[((i-1+n)%n)]+a[(i+1)%n]);
            if (s[i]<0) s[i]=0;
        }
        
        vi max;
        f(i,0,n)
        {
            if(s[i]>0) max.pb(d[i]);
        }
        sort(max);
        
        if(max.size()!=0)
        {
            cout<<max[max.size()-1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
        t--;
    }
    return 0;
}