/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int product = 1;
    *returnSize = numsSize;
    int *output = (int *)malloc(sizeof(int)*numsSize);
    for(int i = 0; i < numsSize; i++){
        if (nums[i] == 0) {
            product = 1;
            for(int j = 0; j < i; j++){
                output[j] = 0;
                product = product * nums[j];
            }
            for(int j = i+1; j < numsSize; j++ ){
                output[j] = 0;
                product = product * nums[j];
            }
            output[i] = product;
            return output;
        }
        else product = product*nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        output[i] = product / nums[i];
    }
    return output;
}