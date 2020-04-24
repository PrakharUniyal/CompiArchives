#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n>>k;
    
    vector<int> cnt(1001);
    for(int i=0;i<1001;i++) cnt[i]=0;
    
    vector<int> drk(n);
    for(int i=0;i<n;i++){cin>>drk[i]; cnt[drk[i]]++;}
    
    int flag=0;
    for(int i=0;i<1001;i++){if(cnt[i]%2){flag++;}}
    
    if(flag>=2){cout<<n-((int) flag/2)<<endl;}
    else cout<<n<<endl;
    
    return 0;
}