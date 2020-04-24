#include <bits/stdc++.h>
using namespace std;
#define li long long

int main() {
	double h,l; cin>>h>>l;
	
	double x=l*l - h*h;
	double y=x/(2*h);
	
	printf("%.13lf\n",y);
	return 0;
}