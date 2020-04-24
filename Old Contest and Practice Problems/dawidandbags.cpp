#include <bits/stdc++.h>
using namespace std;
#define li long long
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
{
    ios;
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if((a+b+c+d)%2) cout<<"NO";
    
    else
    {
        int tot = (a+b+c+d)/2;
        if(a==tot ||b==tot ||c==tot ||d==tot ||a+b==tot ||a+c==tot ||a+d==tot ||b+c==tot ||b+d==tot ||c+d==tot)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    
}