// HeapSort := Max Heap implementation 

#include <bits/stdc++.h>

using namespace std;

void heapify(vector <int> &v, int heapifyAt, int size);
void heapsort(vector <int>&v, int size);

int main(){
	int arr[] = {1,3,2,4,7,0};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	vector <int> v;
	v.insert (v.end(), arr, arr+arrSize);
	
	heapsort(v, v.size());
	cout<<endl;
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';  //prints in increasing order
	}
	
	return 0;
}

void heapify(vector <int> &v, int heapifyAt, int size){
	int lChild = 2*heapifyAt +1;
	int rChild = 2*heapifyAt +2;
	int largest = heapifyAt;

	if(lChild < size && v[lChild] > v[largest]){
		largest = lChild;
	}

	if(rChild < size && v[rChild] > v[largest]){
		largest = rChild;
	}

	if(largest != heapifyAt){
		swap(v[heapifyAt], v[largest]);
		heapify(v,largest,size);
	}
}

void heapsort(vector <int> &v, int size){
	for (int i = size/2-1; i >=0; i--){
		heapify(v,i,size);
	}

	for(int i=size-1;i>=0;i--){
		cout<<v[0]<<' '; //Extracts the largest and prints in decreasing order
		swap(v[0],v[i]);
		size--;
		heapify(v,0,size);
	}
}
