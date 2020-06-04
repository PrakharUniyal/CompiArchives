#include<bits/stdc++.h>
using namespace std;

int size_of_lis(vector<int> s)
{
    // Size
    int n = s.size();

    // DP table
    vector<int> lis(n);

    // Base Case
    lis[0] = 1;

    // Constructor
    for(int i=1;i<n;i++)
    {
        lis[i] = 1;
        for(int j=0;j<i;j++)
        {
            lis[i] = s[j]<s[i]?max(lis[i],lis[j]+1):lis[i];
        }
    }

    return *max_element(lis.begin(),lis.end());
}

int main() {}