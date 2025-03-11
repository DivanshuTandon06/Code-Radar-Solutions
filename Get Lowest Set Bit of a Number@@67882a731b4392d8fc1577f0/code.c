#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bit_pos = n & -n;
    printf("%d",bit_pos+1);
    return 0;
    }