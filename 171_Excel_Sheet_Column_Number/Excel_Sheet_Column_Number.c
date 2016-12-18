int titleToNumber(char* s) {
    int len = strlen(s);
    int n = 0;
    for(int i = 0; i < len; i++){
        n = n * 26;
        n = n + (s[i] - 'A' + 1);
    }
    return n;
}