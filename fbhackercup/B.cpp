#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int t; cin>>t;
    for(int x = 1; x<=t; x++)
    {
        num(n);
        str(c);

        int a=0,b=0;

        loop(i,0,n)
        {
            if(c[i]=='A'){a++;}
            else{b++;}
        }

        cout<<"Case #"<<x<<": ";
        cout<<(abs(a-b)==1?'Y':'N')<<endl;
    }
    return 0;
}

/*
Explain:



*/