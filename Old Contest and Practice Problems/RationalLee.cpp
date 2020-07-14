#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i=0;i<n;i++){cin>>a[i];}

        vector<int> w(k);
        for(int i=0;i<k;i++){cin>>w[i];}

        sort(a.begin(),a.end());
        sort(w.begin(),w.end(),greater<int>());

        int ans = 0;

        for(int i=0;i<k;i++)
        {
            ans += a[n-1-i];
        }

        int ind = 0;
        for(int i=0;i<k;i++)
        {
            cout<<a[ind]<<" ";
            ans += a[ind];
            ind += w[i]-1;
        }

        cout<<ans<<endl;
    }

}

/*
w0-1 -> a[0]
w1-1 -> a[w[0]-1]
w2-1 -> a[w[0]+w[1] - 2]
.
.
.
wk-1 - 1 -> a[w[0]+w[1]+..+w[k-2]-k-1]

*/