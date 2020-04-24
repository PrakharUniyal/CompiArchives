#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[1001];
    nums[0]=0;
    for(int i=1;i<1001;i++)
    {
        int sum=0;
        for(int j=1;j<(int)(sqrt(i)+1);j++)
        {
            if (i%j==0)
            {
                if (j!=i/j) sum+=(j+(i/j));
                else sum+=j;
            }
        }
        sum-=(i+1);
        nums[i]=max(sum,i);
    } //Code to generate the list of return values for each coin.
  
  int val[1001];
  val[0] = 0;
  for (int i = 1; i<=1000; i++) 
    { 
        int max_val = -1; 
        for (int j = 0; j < i; j++) {max_val = max(max_val, nums[j+1] + val[i-j-1]);} 
        val[i] = max_val; 
    }
  
  int q;cin>>q;
  
  int n;
  for(int i=0;i<q;i++)
  {
      cin>>n;
      cout<<val[n]<<endl;
  }
  return 0;
}