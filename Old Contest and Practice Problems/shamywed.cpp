#include <iostream>
using namespace std;

string month[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};

int main() {
	int year; cin>>year;
	string mon; cin>>mon;
	
	int res[12]={0,4,3,0,6,0,3,1,2,2,1,0};
	
	for(int i=0;i<12;i++)
	{
	    if (mon==month[i])
	    {
	        cout<<res[i]<<endl;
	    }
	}
	return 0;
}