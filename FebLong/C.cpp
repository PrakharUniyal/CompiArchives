#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

long long dayofweek(long long d, long long m, long long y) 
{ 
	static long long t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y / 4 - y / 100 + 
			y / 400 + t[m - 1] + d) % 7; 
} 

long long func(long long y)
{
    long long ans = ((long long) (y)/400)*101;

    long long c=0;
    for(int i=1;i<=(y%400);i++)
    {
        if(i%4!=0 && (dayofweek(1,2,i)==0 || dayofweek(1,2,i)==6)){c++;}
        if(i%4==0 && i%100!=0 && dayofweek(1,2,i)==6){c++;}
        if(i%100==0 && i%400!=0 && (dayofweek(1,2,i)==0 || dayofweek(1,2,i)==6)){c++;}
        if(i%400==0 && dayofweek(1,2,i)==6){c++;}
    }

    ans+=c;

    return ans;

}

int main()
#define int long long
{
    ok;
    test(t)
    {
        num(m1);
        num(y1);
        num(m2);
        num(y2);

        if(m1<3){y1--;}
        if(m2<2){y2--;}

        cout<<func(y2)-func(y1)<<endl;
    }
    return 0;
}
