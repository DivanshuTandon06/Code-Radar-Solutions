#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
     int nth_bit= ~(1<<b);
     int res=a&nth_bit;
     printf("%d",res);
}