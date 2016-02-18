#include <iostream>
using namespace std;
int k=2;
void MergeinsertionSort(int *num, int beg, int end);
void Merge(int *num, int beg1, int beg2,int end);
void InsertionSort(int *num, int beg, int end);

int main(){
    int num[100], n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    MergeinsertionSort(num,0,n-1);

    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}

void MergeinsertionSort(int *num, int beg, int end){
    int mid=(beg+end)/2;
    if((end-beg+1)<=k)
       InsertionSort(num, beg, end);

    else{
        MergeinsertionSort(num, beg, mid);
        MergeinsertionSort(num,mid+1,end);
        Merge(num, beg, mid+1, end);
    }

}

void Merge(int *num, int beg1, int beg2,int end){
    int i=beg1, j=beg2,k=beg1;
    int temp[100];

    for(int i=0;i<100;i++){
        temp[i]=0;
    }

    while(i<beg2 && j<=end){
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

void InsertionSort(int *num, int beg, int end){
    for(int i=beg+1; i<=end ;i++){
        int j=i-1;
        int val=num[i];

        while(num[j]>val && j>=beg){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=val;
    }
}
