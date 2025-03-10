#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
     int nth_bit= ~(1<<b);
     printf("%d",a);
}