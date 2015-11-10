/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int *output = (int *)malloc(sizeof(int)*2);
    int xr = nums[0];
    for (int i = 1; i < numsSize ; i++){
        xr = xr ^ nums[i];
    }
    
    int prine = 1;
    while ((prine & xr) ==0) prine = prine *2;
    int it1 = 0, it2 = 0;
    for (int i = 0; i < numsSize; i++){
        if(prine & nums[i]) it1 = it1 ^nums[i];
        else it2 = it2 ^nums[i];
    }
    output[0] = it1;
    output[1] = it2;
    return output;
    
}