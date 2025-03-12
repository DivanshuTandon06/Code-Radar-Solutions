#include <stdio.h>
int main(){
    char  a;
    scanf("%c",&a);
   int assi_val=a;
    if (assi_val<=90 &&assi_val>=65)
    printf("Uppercase");
    else{
        printf("Lowercase");
    }
    return 0;
    }