#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    
    int bcnt=0;
    for(int i=0;i<b.size();i++) bcnt=(b[i]=='1')? bcnt+1:bcnt;
    
    int psum[a.size()];
    psum[0]=0;
    for(int i=1;i<=a.size();i++) psum[i]=(a[i-1]=='1')? psum[i-1]+1:psum[i-1];

    int ans=0;
    for(int i=b.size();i<=a.size();i++) ans=((psum[i]-psum[i-b.size()]-bcnt)%2)? ans:ans+1;
    
    cout<<ans<<endl;

    return 0;
}