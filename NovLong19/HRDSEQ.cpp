#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ind[n];int cnt[n];
        for(int i=0;i<n;i++){ind[i]=-1;}
        for(int i=0;i<n;i++){cnt[i]=0;}
        
        int seq[n];
        seq[0] = 0;ind[0] = 0;cnt[0] = 1;
        
        for(int i=1;i<n;i++)
        {
            if(ind[seq[i-1]]==-1){seq[i]=0;ind[seq[i-1]]=i-1;cnt[0]++;}
            else{seq[i]=i-1-ind[seq[i-1]];ind[seq[i-1]]=i-1;cnt[seq[i]]++;}
        }
        cout<<cnt[seq[n-1]]<<endl;
    }
	return 0;
}