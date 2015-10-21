int climbStairs(int n) {
    if(n == 1) return 1;
    if(n == 0) return 0;
    int si = 0, sii = 1,sum;
    for (int i = 1; i <=n; i++){
        sum = si+sii;
        si= sii;
        sii = sum;
    }
    return sum;
}