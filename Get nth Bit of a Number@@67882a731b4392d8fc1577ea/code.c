#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d"&a,&b);
    int num=(a>>b)&1;
    printf(num);
return 0;
    
}