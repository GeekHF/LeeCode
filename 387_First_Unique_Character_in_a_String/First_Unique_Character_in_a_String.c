int firstUniqChar(char* s) {
    int len = strlen(s);
    if(len == 0) return -1;
    if(len == 1) return 0;
    int table[26];

    for(int i = 0; i < 26; i++){
        table[i] = 0;
    }

    for(int i = 0; i < len; i++){
        int temp;
        temp = s[i] - 'a';
        table[temp]++;
    }
    for(int i = 0; i < len; i++){
        int temp;
        temp = s[i] - 'a';
        if(table[temp] == 1) return i;
    }
    return -1;
}