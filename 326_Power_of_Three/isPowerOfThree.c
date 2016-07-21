bool isPowerOfThree(int n) {
    if(n == 0) return false;
    return  (int)(pow(3,(int)((log(n) / log(3))+0.5))) == n;
}