#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    if(arr[n-1]>=arr[n-2]+arr[n-3])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        if (n%2==0)
        {
            int i;
            for(i=0;i<=n-2;i+=2)
            {
                cout<<arr[i]<<" ";
            }
            
            i-=2;
            i++;
            
            while(i>=1)
            {
                cout<<arr[i]<<" ";
                i-=2;
            }
            
            cout<<endl;
        }
        
        else
        {
            int i;
            for(i=0;i<=n-1;i=i+2)
            {
                cout<<arr[i]<<" ";
            }
            
            i-=2;

            i--;

            while(i>=1)
            {
                cout<<arr[i]<<" ";
                i-=2;
            }
            
            cout<<endl;            
        }
    }
	return 0;
}