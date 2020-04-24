#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=m;i>n;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    num(n);
    arr(t,n);
    
    vector<int> a_b(n-1);

    int a = 0;
    int b = 0;
    int c = 0;

    loop(i,0,n)
    {
        if(t[i]>0){a++;}
        if(t[i]<0){b++;}
        if(t[i]==0){c++;}
        if(i<n){a_b[i]=a-b;}
    }

    cout<< b + c + *min_element(a_b.begin(),a_b.end())<<endl;

    return 0;
}

/*
Explain:
Every array has substrings of all postive/negative/zero numbers.
Track number of pos(a),neg(b),zero(c) up till each point and evaluate (a-b)
The place where it is minimum will be optimal for seperating and answer will be B + C + a - b where B is total negs and C is totals zeros.
*/