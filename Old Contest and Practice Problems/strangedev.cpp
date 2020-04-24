#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(n) for(long long i=0;i<n;i++)

int main()
#define int long long
{
    num(n);
    num(k);
    
    int ind[k+1];
    int val[k+1];
    
    for(int i=0;i<k+1;i++)
    {
        cout<<"? ";
        for(int j=0;j<k+1;j++)
        {
            if(j!=i){cout<<j+1<<" ";}
        }
        cout<<endl;
        cout.flush();
        
        cin>>ind[i]>>val[i];
    }
    
    int num[n+1];
    int vn[n+1];
    loop(n+1){num[i]=0;vn[i]=0;}
    
    for(int i=0;i<k+1;i++)
    {
        num[ind[i]]++;
        vn[ind[i]]=val[i];
    }
    
    int* i1; 
    i1 = std::max_element(vn, vn + n+1); 
    
    cout<<"! "<<num[(i1-vn)]<<endl;
    return 0;
}   