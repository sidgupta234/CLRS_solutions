/*
Merge sort is a recursive algorithm that continually splits a list in half. If the list is empty or has one item,
it is sorted by definition (the base case). If the list has more than one item, we split the list and recursively
invoke a merge sort on both halves.
*/

#include <iostream>
using namespace std;

void merge(int *num, int beg1, int beg2, int end);
void mergesort(int *num, int beg, int end);

int main(){
    int num[100], n;
    cin>>n; //number of elements to be sorted

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    mergesort(num,0,n-1);

    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}

void mergesort(int *num, int beg, int end){
    int NumOfElements=end-beg+1;
    if(NumOfElements<2)
        return;

    int mid=(beg+end)/2;
    mergesort(num, beg, mid);
    mergesort(num, mid+1, end);
    merge(num, beg, mid+1, end);
}

void merge(int *num, int beg1, int beg2, int end){
    int temp[100];

    for(int i=0;i<end-beg1;i++){
        temp[i]=0;
    }

    int i=beg1, j=beg2, k=beg1;

    while(i<beg2 && j <=end){
        if(num[i]<num[j]){
            temp[k]=num[i];
            i++;
        }

        else{
            temp[k]=num[j];
            j++;
        }

        k++;
    }

    while(i<beg2){
         temp[k]=num[i];
         i++;
         k++;
    }

    while(j<=end){
         temp[k]=num[j];
         j++;
         k++;
    }

    for(int i=beg1;i<=end;i++){
        num[i]=temp[i];
    }
}



