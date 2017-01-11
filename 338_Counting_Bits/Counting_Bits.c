int* countBits(int num, int* returnSize) {
    int *res; int ex = 1;
    *returnSize = num +1;
    res = (int *)malloc((num+1)* sizeof(int));
    res[0] = 0;
    if(num == 0) return res;
    int i = 1;
    int j;
    while(i < num+1){
        int before = ex;
        if(i == ex) {
            res[i] = 1;
            i++;
            ex = ex<<1;
        }
        j = 1;
        while(j < before && i < ex && i < num+1){
          res[i] = 1 + res[j];
          i++;
          j++;
        }
    }
    return res;
}
