int findComplement(int num) {
    int mask = ~0;
    while(mask&num) mask = mask<<1;
    num = (~num) & (~mask);
    return num;

}