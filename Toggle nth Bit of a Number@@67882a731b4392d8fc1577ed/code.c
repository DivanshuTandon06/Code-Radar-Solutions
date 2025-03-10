#include <stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int nth=a^(1<<b);
printf("%d",nth);

}
