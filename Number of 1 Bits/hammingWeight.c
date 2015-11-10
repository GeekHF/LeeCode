int hammingWeight(uint32_t n) {
    int hweight = 0;
    for (int i = 0; i < 32; i++){
        hweight = n%2 +hweight;
        n = n/2;
    }
    return hweight;
}