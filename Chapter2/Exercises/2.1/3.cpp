// Code for Searching Linearly.

int linearSearch(int *arr, int n, int LookingFor){
    for(int i=0;i<n;i++){
        if(arr[i]==LookingFor)
            return i;
    }
    return -1;
}

/*
Loop Invariant :- None of the elements in arr[0..i] are equal to v.

Initialization : Initially the subarray is empty, so proving it is trivial.

Maintenance : On each step we know that A[0..i-1] does not contain v, we compare it with arr[i], if value is found we return it, else at the end arr[0...i] will not contain v, maintaining the invariant.

Termination : The loop terminates when i=n, we know that all the elements have been scanned and it has been found that v is not among them. Thus we return -1.
*/
