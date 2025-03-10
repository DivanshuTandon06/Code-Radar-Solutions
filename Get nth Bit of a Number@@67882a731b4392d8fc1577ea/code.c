#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int num=(a>>b)&1;
    printf(num);
return 0;
    
}