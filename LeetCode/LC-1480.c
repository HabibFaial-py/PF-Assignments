int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;  

    int total = 0;
    for (int i = 0; i < numsSize; i++) {
        total += nums[i];
        nums[i] = total;
    }

    return nums;
}