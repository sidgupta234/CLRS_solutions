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
