int findMin(int* nums, int numsSize) {
    int target = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(nums[i] > target) target = nums[i];
        else return nums[i];
    }
    return nums[0];
}