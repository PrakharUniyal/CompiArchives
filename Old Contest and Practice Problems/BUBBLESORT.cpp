#include <iostream>
using namespace std;


void BubbleSort(int a[], int N)                                 //Swapping Mechanism.
{
    bool check;    												//A check to make just in case the array gets sorted early.
	for(int i=0;i<N;i++)										//Iterator of Swap Cycle Size.
	{
	    check=false;	    
		for(int j=0;j<N-i-1;j++)								//Swap Cycle.
		{
			if(a[j]>a[j+1])										//Swapping.
			{
			    a[j]=a[j]+a[j+1];
			    a[j+1]=a[j]-a[j+1];
			    a[j]=a[j]-a[j+1]; 
			    check=true;
			}
		}
		if(check) break;
	}
}

int main(){
	int N;
	cin>>N;

	int array[N];
	for(int i=0;i<N;i++) cin>>array[i];

	BubbleSort(array,N);

	for(int i=0;i<N;i++) cout<<array[i]<<" ";	

}

//Give the fucking input in the form of:
//N(Number of elements in array).
//n(1) n(2) n(3) ... n(n) (Elements)

//Output:
//n'(1) n'(2) n'(3) ... n'(n) (Sorted Elements)