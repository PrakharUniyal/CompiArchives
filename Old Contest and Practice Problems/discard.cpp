#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k; cin>>n>>m>>k;
    vector <long long> p;
    vector <long long> sgn;
    long long temp;
    for(long long i=0;i<m;i++)
    {
        cin>>temp;
        p.push_back((temp-1)%k + 1);
        sgn.push_back((temp-1)%k + 1 - i%k);
    }
    
    long long c=0;
    for(int i=0;i<m-1;i++)
    {
        if (p[i]>=p[i+1]) c++;
        if (sgn[i]<1) c++;
    }
    
    if (sgn[m-1]<1) c++;
    cout<<c+1<<endl;
    
    
}