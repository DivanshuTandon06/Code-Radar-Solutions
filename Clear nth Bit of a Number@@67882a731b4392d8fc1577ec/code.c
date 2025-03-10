#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
     int nth_bit= ~(a<<b);
     printf("%d",a);
}