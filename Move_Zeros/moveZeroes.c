void moveZeroes(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++){
        for (int j = i; j > 0 ; j--){
            if ( nums[j-1] == 0){
                nums[j-1] = nums[j];
                nums[j] = 0;
            }
            else break;
        }
    }
}