
void selectionSort(int *num, int n){
    for(int i=0;i<n-1;i++){
        int indOfMin=i;

        for(int j=i;j<n;j++){
            if(num[j]<num[indOfMin]){
                indOfMin=j;
            }
        }
        int temp=num[i];
        num[i]=num[indOfMin];
        num[indOfMin]=temp;
    }
}

/*
Loop Invariant :- A[1..i] is sorted.

After n-1 iteration, the first n-1 terms will be the smallest n-1 terms of the array, which implicitly makes the nth term to be the
smallest.

Both the best and average case running times of selection sort are big-Theta of n^2.

Irrespective of the cases the given loop :-

for(int i=0;i<n-1;i++){
  for(int j=i;j<n;j++){
  }
}

will always run.
*/
