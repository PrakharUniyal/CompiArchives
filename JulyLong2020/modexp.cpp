// Recursive C++ program to compute modular power  
#include <bits/stdc++.h>  
using namespace std; 
  
long long powm(long long A, long long B, long long C)  
{    
    if (A == 0) {return 0;}
    if (B == 0) {return 1;}  
    long long y;  
    if (B % 2 == 0) {  
        y = powm(A, B / 2, C);  
        y = (y * y) % C;  
    }  
    else {  
        y = A % C;
        y = (y * powm(A, B - 1, C) % C) % C;  
    }  
    return (int)((y + C) % C);  
}  
  
// Driver code  
int main()  
{
    int A = 998244352, B = 4, C = 998244353;
    cout << "Power is " << exponentMod(A, B, C);  
    return 0;  
}