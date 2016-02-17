void recInsertionSort(int *num, int lastInd){
    if(lastInd==0)
        return;
    else
        recInsertionSort(num,lastInd-1);

    int val=num[lastInd];
    int j=lastInd-1;

    while(num[j]>val && j>=0){
        num[j+1]=num[j];
        j--;
    }
    num[j+1]=val;
}
/*
For n=1, T(1) = O(1)
For other values of n, T(n) = T(n-1) + O(n). 
*/
