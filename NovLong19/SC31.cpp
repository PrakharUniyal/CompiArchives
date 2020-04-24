#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
        vector<int> nums(10);
	    for(int i=0;i<n;i++){char weap[10];for(int i=0;i<10;i++){cin>>weap[i];nums[i]^=((int)(weap[i]-'0'));}}
	    int cnt = 0;for(int i=0;i<10;i++){if(nums[i]){cnt++;}}
	    cout<<cnt<<endl;
	}
	return 0;
}