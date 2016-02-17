int Bin_Search(int *num, int startInd, int endInd, int key){
    if(startInd>endInd)
        return -1;
    int mid=(endInd+startInd)/2;

    if(key==num[mid])
        return mid;

    if(key>num[mid])
        return Bin_Search(num,mid+1,endInd,key);
    return Bin_Search(num,startInd,mid-1,key);

}

/*
After each stage our search space halves, we get a solution or we exhaust the search space, the latter would form the worst case.
Let k be the number of times we should halve the search space to exhaust the search space, in this case :-
2^k = n => k= log n.
The Recurrence relation would be,
T(1) = O(1)
T(n) = T(n/2) +O(1)
*/
