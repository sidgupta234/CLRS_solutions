/*
Insertion sort is an elementary sorting algorithm that sorts one element at a time. Most humans, when sorting a deck of cards, will
use a strategy similar to insertion sort. The algorithm takes an element from the list and places it in the correct location in the
list.
*/

#include <iostream>
using namespace std;

void insertionSort(int *num, int n);

int main(){
    int num[100], n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    insertionSort(num,n);

    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}

void insertionSort(int *num, int n){
    for(int i=1;i<n;i++){
        int val=num[i];
        int j=i-1;

        while(num[j]>val && j>=0){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=val;
    }
}
