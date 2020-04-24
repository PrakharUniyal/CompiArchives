#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n;
    cin>>n;
    double vals[n];
    for(int i=0;i<n;i++){cin>>vals[i];}
    
    double ivals[n],sum=0;
    for(int i=0;i<n;i++){ivals[i]= floor(vals[i]); sum+=ivals[i];}

    for(int i=0;i<n;i++){if(sum==0){break;}else{if (vals[i]!=ivals[i]) {ivals[i]++;sum++;}}}
    
    for(int i=0;i<n;i++) cout<<(int) ivals[i]<<endl;
}