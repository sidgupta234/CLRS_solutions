// n is the number of elements in array num.

void insertionSort(int *num, int n){
    for(int i=1;i<n;i++){
        int val=num[i];
        int j=i-1;

        while(num[j]<val && j>=0){
            num[j+1]=num[j];
            j--;
        }
        
        num[j+1]=val;
    }
}
