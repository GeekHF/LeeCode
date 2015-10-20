int searchInsert(int* nums, int numsSize, int target) {
    if(numsSize < 2){if(target <= nums[0]) return 0; else return 1;}
    int low = 0, high = numsSize,mid;
    do{ 
        mid = (high-low)/2 + low;
        if(target <= nums[mid]) high = mid;
        else low = mid;
    }while((high - low) > 1);
    if(target<= nums[low]) return low;
    else return high;
}

int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++){
        if(target <= nums[i]) return i;
    }
    return numsSize;
}