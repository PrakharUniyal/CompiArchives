#include <bits/stdc++.h>
using namespace std;

int invertBits(int num) 
{ 
    // calculating number of bits 
    // in the number 
    int x = log2(num) + 1; 
  
    // Considering number to be 32 bit integer; 
    bitset<32> b(num); 
  
    // reversing the bits one by one 
    for (int i = 0; i < x; i++)  
        b.flip(i); 
  
    // converting bitset to number 
   return b.to_ulong();
}

int XOR(int x, int y) 
{ 
    int res = 0; // Initialize result 
      
    // Assuming 32-bit Integer  
    for (int i = 31; i >= 0; i--)                      
    { 
       // Find current bits in x and y 
       bool b1 = x & (1 << i); 
       bool b2 = y & (1 << i); 
         
        // If both are 1 then 0 else xor is same as OR 
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
        // Update result 
        res <<= 1; 
        res |= xoredBit; 
    } 
    return res; 
} 

int lf(long long n)
{
    if(n==3) return 1;
    if(n==7) return 1;
    
    if(n%2==0) return n/2;
    else
    {
        for(long long i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                return n/i; 
            }
        }

        return 1;
    }
}

int main() {
    int q;
    cin>>q;
    
    long long num[q];
    for(long long i=0;i<q;i++)
    {
        cin>>num[i];
        //cout<<invertBits(num[i])<<endl;
        if(invertBits(num[i]) !=0) cout<<XOR(num[i],invertBits(num[i]))<<endl;
        
        else
        {
            cout<<lf(num[i])<<endl;
        }
    }
    
    
    return 0;
}