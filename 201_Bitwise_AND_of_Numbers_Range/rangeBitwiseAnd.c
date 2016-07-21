int rangeBitwiseAnd(int m, int n) {
    int l = 0;
    while ((l < 31) && (1<<l) <= m ){
        l++;
    }
    if((l < 31) &&(1<<l) < n) return 0;
    int bitwise = m;
    for(int i = m ; i <= n;){
        bitwise = bitwise & i;
        if(i < 2147483647) i++;
        else break;
    }
    return bitwise;
}