//Maximum subarray sum using divide and conquer
#include <bits/stdc++.h>
using namespace std;

int MaxSubarray(int *num, int start, int end);
int MaxOfCrossing(int *num, int start, int mid, int end);

int main(){
    int num[]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int size=sizeof(num)/sizeof(num[0]);

    cout << MaxSubarray(num,0,size-1)<< endl;
    return 0;
}

int MaxSubarray(int *num, int start, int end){
    if(start==end){
        return num[start];
    }
    int mid=(start+end)/2;
    return max(max(MaxSubarray(num,start,mid),MaxSubarray(num,mid+1,end)),MaxOfCrossing(num,start,mid,end));
}

int MaxOfCrossing(int *num, int start, int mid, int end){
    int left_max=INT_MIN;
    int left_sum=0;

    for(int i=mid;i>=start;i--){
        left_sum+=num[i];
        if(left_sum>left_max){
            left_max=left_sum;
        }
    }

    int right_max=INT_MIN;
    int right_sum=0;

    for(int i=mid+1;i<=end;i++){
        right_sum+=num[i];
        if(right_sum>right_max){
            right_max=right_sum;
        }
    }

    return left_max+right_max;
}
