#include <iostream>
using namespace std;

void recInsertionSort(int *num, int lastInd);

int main(){
    int num[100], n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    recInsertionSort(num,n-1);

    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}

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
