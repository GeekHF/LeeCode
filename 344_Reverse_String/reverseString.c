char* reverseString(char* s) {
    int l = 0;
    while(s[l] != '\0'){
        l++;
    }
    int i;
    char *rev;
    for (i = 0; i < l; i++){
        rev[i] = s[l-i-1];
    }
    rev[i] = '\0';
    return rev;
}