int binSearch(int A[],int key, int low, int high){
	int mid = (low+high)/2;
	
	if(low>high)
		return -1;

	if(A[mid]==key)
		return mid;

	if(A[mid]>key)
		return binSearch(A, key, low, mid-1);

	return binSearch(A, key, mid+1, high);
}
