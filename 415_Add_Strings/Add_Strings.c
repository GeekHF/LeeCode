char* addStrings(char* num1, char* num2) {
    char *s;int len = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    char carryover = '0';
    s = (char *) malloc(5100*sizeof(char));

    while(len < len2 && len < len1){
        s[len] = num1[len1-len-1]-'0' + num2[len2-len-1]-'0' + carryover;
        if(s[len] > '9') {
            s[len] = s[len] - ':' + '0';
            carryover = '1';
        }
        else carryover = '0';
        len++;
    }

    while(len < len1){
        s[len] = num1[len1-len-1] + carryover -'0';
        carryover = '0';
        if(s[len] > '9'){
            s[len] = s[len] - ':' + '0';
            carryover = '1';
        }
        else carryover = '0';
        len++;
    }

    while(len < len2){
            s[len] = num2[len2-len-1] + carryover -'0';
            carryover = '0';
            if(s[len] > '9'){
                s[len] = s[len] - ':' + '0';
                carryover = '1';
            }
            else carryover = '0';
            len++;
        }

    if (carryover == '1'){
        s[len] = '1';
        len++;
        s[len] = '0';
    }
    else{
        s[len] = '\0';
    }

    for(int i = 0; i < len/2; i++){
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    s[len] = '\0';
    return s;
}