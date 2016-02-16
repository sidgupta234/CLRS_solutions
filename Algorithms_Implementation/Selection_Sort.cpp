/*
The selection sort is a combination of searching and sorting. During each pass, the unsorted element with the smallest (or largest)
value is moved to its proper position in the array. The number of times the sort passes through the array is one less than the number
of items in the array.
*/

#include <iostream>
using namespace std;

void selectionSort(int *num, int n);

int main(){
    int num[100], n;
    cin>>n; //number of elements

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    selectionSort(num,n);

    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}

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
