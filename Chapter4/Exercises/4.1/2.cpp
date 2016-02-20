int MaxSubarray(int *num, int start, int end){
    int maxSum=INT_MIN;
    for(int i=0;i<=end;i++){
        int sum=0;
        for(int j=i+1;j<=end;j++){
            sum+=num[j];
            if(sum>maxSum)
                maxSum=sum;
        }
    }
    return maxSum;
}
