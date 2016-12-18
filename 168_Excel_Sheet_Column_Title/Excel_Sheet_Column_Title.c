char* convertToTitle(int n) {
    char *s;
    int i = 0;
    while(n > 0){
        s[i] = n%26 + 'A' - 1;
        if(s[i] == '@'){
            s[i] = 'Z';
            n = n/26 -1;
        }
        else n = n/26;
        i++;
    }
    char *s2;
    for(int j = 0; j < i; j++){
        s2[j] = s[i-j-1];
    }
    s2[i] = '\0';
    return s2;
}