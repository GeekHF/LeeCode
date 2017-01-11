/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *dis; int count = 0;
    dis = (int *)malloc(numsSize* sizeof(int));

    for(int i = 0; i < numsSize; i++){
        int index = nums[i];
        if(nums[abs(index) - 1] > 0){
            nums[abs(index) -1] = - nums[abs(index)-1];
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0){
            dis[count] = i + 1;
            count++;
        }
    }
    *returnSize = count;
    return dis;
}