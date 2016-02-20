int MaxSubarray(int *num, int start, int end){
    if(start==end){
        //return num[start]; Be replacing this line with the latter.
        return max(0,num[start]);
    }
    int mid=(start+end)/2;
    return max(max(MaxSubarray(num,start,mid),MaxSubarray(num,mid+1,end)),MaxOfCrossing(num,start,mid,end));
}
