char findTheDifference(char* s, char* t) {
    char a = 0;
    for(int i = 0; i < strlen(s); i++){
        a = a^s[i];
    }
    for(int i= 0; i < strlen(t); i++){
        a = a^t[i];
    }
    return a;
}