int myAtoi(char* str) {
    int len = strlen(str);
    int sign = 0;
    int num = 0;
    int dim = 0;
    int pick = 0;
    while(str[pick] == ' '&& pick < len){
        pick ++;
    }
    if(str[pick] == '-') {
        sign = 1;pick++;
    }
    else if(str[pick] == '+') {
        sign = 0;
        pick++;
    }
    while(str[pick] >='0' && str[pick] <='9'){
        int dic = str[pick]- '0';
        if(num){
            if(sign){
                if (-num < INT_MIN/10)
                {
                    return INT_MIN;
                }
                if((INT_MIN + dic) > -num*10) return INT_MIN;
            }
            else {
                if (num > INT_MAX/10)
                {
                    return INT_MAX;
                }
               if((INT_MAX - dic) < num*10) return INT_MAX;
            }
        }

        num = num * 10 + dic ;
        dim ++;
        pick++;
    }

    if(sign) return -num;
    else return num;
}