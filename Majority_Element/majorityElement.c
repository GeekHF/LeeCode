int majorityElement(int* nums, int numsSize) {
    int *flag = malloc(numsSize * sizeof(int));
    memset(flag,1,numsSize*sizeof(int));
    for (int i = 0; i < numsSize; i++){
        if( flag[i] ){
            int target = nums[i];
            int number = 0;
            for(int j = i; j < numsSize;j++){
                if (target == nums[j]) {
                    number++;
                    flag[j] = 0;
                }
            }
            if(number> numsSize/2) return nums[i];
        }
    }
    
}