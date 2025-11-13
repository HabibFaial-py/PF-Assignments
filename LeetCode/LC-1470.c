int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int new_array[2*n];
    *returnSize = numsSize;
    for(int i = 0 ; i<n ; i++){
        new_array[2*i] = nums[i];
        new_array[2*i+1] = nums[i+n]; 
    }
    for(int i = 0 ; i<2*n ; i++){
        nums[i] = new_array[i];
    }
    return nums;
}