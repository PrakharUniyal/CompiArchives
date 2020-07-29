#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define ek first
#define do second
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        num(k);
        num(z);

        arr(a,n);

        vector<int> sl(a.begin(),a.begin()+k+1);
        vector<int> psl(sl.size()-1);

        int mv = INT_MIN;
        int mi = -1;
        loop(i,0,sl.size()-1) {psl[i]=sl[i]+sl[i+1]; if(psl[i]>mv){mv=psl[i];mi=i;}}

        vector<int> alr(sl.size());
        alr[0]=a[0];
        loop(i,1,sl.size()) {alr[i]=alr[i-1]+a[i];}

        loop(i,0,sl.size()-1)
        {
            if(2*z>=(k-i))
            {
                if((k-i)%2){psl[i]*=(k-i)/2; psl[i]+=sl[i+1];}
                else{psl[i]*=(k-i)/2;}
            }
            else
            {
                int d = k-i-2*z;
                psl[i]*=z;
                psl[i] += (alr[i+d]-alr[i]);
            }
        }

        loop(i,0,psl.size()) {psl[i]+=alr[i];}
        de(*max_element(psl.begin(),psl.end()));

    }
    return 0;
}

/*
Explain:

*/