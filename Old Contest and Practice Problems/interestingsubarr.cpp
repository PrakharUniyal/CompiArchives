#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)

int main()
{
    num(t);
    while(t--)
    {
        num(n);
        arr(a,n);
        
        int dif[n-1];
        bool f=false;
        int i;
        for( i=1;i<n;i++)
        {
            dif[i]=a[i]-a[i-1];
            if(abs(dif[i])>1){f=true; break;}
        }
        
        if(f)
        {
            cout << "YES\n"<<i<<" "<<i+1<<endl; 
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}   