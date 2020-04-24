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
    str(s);

    vector<int> small;
    loop(i,0,s.size())
    {
        if(s[i]-'a'<0){small.push_back(-1);}
        else {small.push_back(1);}
    }

    
    vector<int> a_b(s.size()+1);

    int a = 0;
    int b = 0;

    a_b.push_back(0);
    loop(i,0,s.size())
    {
        if(small[i]>0){a++;}
        if(small[i]<0){b++;}
        a_b[i+1]=a-b;
    }

    cout<< b + *min_element(a_b.begin(),a_b.end())<<endl;

    return 0;
}

/*
Explain:
Similar to the weather problem. Just needed a couple of changes.
*/