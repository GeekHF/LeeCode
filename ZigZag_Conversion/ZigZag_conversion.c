#include<stdio.h>
#include<stdlib.h>
char* convert(char* s, int numRows);

int main(){
    int n;
    char *s;
    printf("input the mumber of the rows\n");
    scanf("%d",&n);
    printf("input string:");
    scanf("%s",s);
    s = convert(s,n);
    printf("%s\n",s);
    return 0;

}


char* convert(char* s, int numRows) {
    int strlength = 0, numColums, numSegment, rowi, colj, i, j;
    while ( s[strlength] != '\0'){
        strlength++;
    }

        char *newstring = (char *)malloc(sizeof(char) * strlength);
        char *convert2 = (char *)malloc(sizeof(char) * strlength);

    if (numRows == 1 || numRows >= strlength) {
         return s;
     }


    if (numRows == 2) {
        numColums = (strlength+1) / 2;
        for (i = 0; i < strlength; i++)
        {
            if (i < numColums){newstring[i] = s[2*i];}
            else {newstring[i] = s[(i - numColums+1)*2-1];}
        }
        
        return newstring;         
    }

    printf("string length is %d\n",strlength);
    numSegment = numRows - 2 + numRows;
    if ( strlength % numSegment <= numRows && strlength % numSegment > 0 ){
        numColums = strlength / numSegment*(numRows - 1) + 1;
    }
    else numColums = strlength / numSegment *(numRows -1) + strlength % numSegment - numRows + 1;
    printf("numColums = %d\n",numColums);
    for (i = 0; i < numColums*numRows; i++) newstring[i] = '\0';
    for (i = 0; i < strlength; i++){
        colj = i / numSegment;
        rowi = i % numSegment;
        if(rowi < numRows){
            colj = colj * (numRows - 1);
            rowi = rowi;
        }
        else {
            colj = colj * (numRows - 1) + rowi - numRows + 1;
            rowi = rowi - numRows + 1;
        }
        newstring[colj+numColums*rowi] = s[i];
    }
    j = 0;
    for(i = 0; i < strlength; i++){
                printf("i = %d\tj = %d\n",i,j);

        while( newstring[j] =='\0' ){ j++; }
       convert2[i] = newstring[j];
        j++;
    }
    return convert2;
    
}