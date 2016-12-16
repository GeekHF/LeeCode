/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>
char** fizzBuzz(int n, int* returnSize) {
    char **s;
    s = malloc(n * sizeof(char*));
    char temp[1024];
    for(int i = 0; i < n; i++){
        if((i+1)%3 && (i+1)%5){
            sprintf(temp,"%d",i+1);
            s[i] = malloc(strlen(temp) + 1);
            strcpy(s[i], temp);
        }
        if ((i+1)%15 == 0){
            s[i] = malloc(strlen("FizzBuzz") + 1);
            strcpy(s[i], "FizzBuzz");
        }
        else if((i+1)%3 == 0){
            s[i] = malloc(strlen("Fizz") + 1);
            strcpy(s[i], "Fizz");
        }
        else if((i+1)%5 == 0){
            s[i] = malloc(strlen("Buzz") + 1);
            strcpy(s[i], "Buzz");
        }
    }
    return s;
}