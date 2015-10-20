int missingNumber(int* nums, int numsSize) {
    int suppose_sum = (1 + numsSize)*(numsSize)/2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++){
        sum = sum + nums[i];
    }
    return (suppose_sum-sum);
}