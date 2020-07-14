#include <bits/stdc++.h> 
using namespace std; 

void updateValueUtil(vector<long long> &arr, vector<pair<long long,long long>> &st, long long ss, long long se, long long index, long long value, long long node) 
{ 
	if (index<ss||index>se){cout << "Invalid Input" << endl; return;}
	
	if (ss == se) 
	{
		arr[index] = value;
		st[node] = make_pair(value,index); 
	} 
	else
    { 
        long long mid = ss+(se-ss)/2; 
        if (index >= ss && index <= mid) updateValueUtil(arr,st,ss,mid,index,value,2*node+1); 
        else updateValueUtil(arr,st,mid+1,se,index,value,2*node+2); 
        st[node] = max(st[2*node+1],st[2*node+2]); 
	} 
	return; 
}

void updateValue(vector<long long> &arr, vector<pair<long long,long long>> &st, long long index, long long value)
{
    updateValueUtil(arr,st,0,arr.size()-1,index,value,0);
}

pair<long long,long long> MaxUtil(vector<pair<long long,long long>> &st, long long ss, long long se, long long l, long long r, long long node) 
{ 
	if (l <= ss && r >= se) return st[node]; 
	if (se < l || ss > r) return make_pair(-1,-1);
    long long mid = ss+(se-ss)/2;
    return (MaxUtil(st,ss,mid,l,r,2*node+1).first)>(MaxUtil(st,mid+1,se,l,r,2*node+2).first)?MaxUtil(st,ss,mid,l,r,2*node+1):MaxUtil(st,mid+1,se,l,r,2*node+2);
}

long long getMax(vector<pair<long long,long long>> st, long long n, long long l, long long r) 
{ 
	if (l < 0 || r > n - 1 || l > r) {cout<<"Invalid Input"<<endl;return -1;} 
	return MaxUtil(st, 0, n - 1, l, r, 0).second; 
} 

pair<long long,long long> constructSTUtil(vector<long long> arr, long long ss, long long se, vector<pair<long long,long long>> &st, long long si) 
{ 
	if (ss == se) {st[si] = make_pair(arr[ss],ss); return st[si];} 
	long long mid = ss+(se-ss)/2; 
	st[si] = (constructSTUtil(arr,ss,mid,st,si*2+1).first)>(constructSTUtil(arr,mid+1,se,st,si*2+2).first)?constructSTUtil(arr,ss,mid,st,si*2+1):constructSTUtil(arr,mid+1,se,st,si*2+2); 
    return st[si];
} 

vector<pair<long long,long long>> constructST(vector<long long> arr) 
{ 
	long long x = (long long)(ceil(log2(arr.size()))); 
	long long max_size = 2 * (long long)pow(2, x) - 1; 
	vector<pair<long long,long long>> st(max_size);
	constructSTUtil(arr, 0, arr.size() - 1, st, 0);
	return st; 
}

void printST(vector<pair<long long,long long>> st)
{
    for(long long i=0;i<st.size();i++) {cout<<st[i].first<<" "<<st[i].second<<" | ";}
    cout<<endl;
}

// Driver code 
int main() 
{ 
	vector<long long> arr = { 3, 1, 4, 1, 9 }; 

	vector<pair<long long,long long>> mst = constructST(arr); 
	
    printST(mst);

    cout << "Index of Max of values in given range = "<< getMax(mst, arr.size(), 1, 3) << endl; 
    
    updateValue(arr, mst, 1, 8);
    
    cout << "Updated index of max of values in given range = "<< getMax(mst, arr.size(), 1, 3) << endl; 
	
	return 0; 
} 
