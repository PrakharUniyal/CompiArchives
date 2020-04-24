#include <bits/stdc++.h>
using namespace std;
#define li long long
#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mo %1000000007

int main()
{
    ios;
    li t; cin>>t;
    while(t--)
    {
        li n,q;
        cin>>n>>q;
        vector<li> pown(n);
        vector<double> powr(n);
        for(int i=0;i<n;i++) cin>>pown[i];
        
        powr[0]=2*pown[0];
        for(int i=1;i<n;i++){powr[i]=2*(powr[i-1]+pown[i]);}
        
        for(int i=0;i<n;i++){powr[i]=(int) (powr[i]/pow(2,i+1));}
        powr.push_back(99999);
        
        // for(int i=0;i<n+1;i++){cout<<powr[i]<<" ";}
        // cout<<endl;
        
        li plc[100000];
        li ini=0LL;
        for(int i=0;i<n;i++){if(powr[i+1]>powr[i]){for(int j=powr[i]+1;j<=powr[i+1];j++){plc[j]=i+1;}}}
        
        //for(int i=0;i<100000;i++){cout<<plc[i]<<" ";}
        
        li X;
        for(int i=0;i<q;i++)
        {
            cin>>X;
            cout<<plc[X]<<endl;
        }
    }
    
}