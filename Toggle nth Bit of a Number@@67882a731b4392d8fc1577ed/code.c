#include <stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int nth=~(1<<b);
int res=a&nth;
printf("%d",res);

}
