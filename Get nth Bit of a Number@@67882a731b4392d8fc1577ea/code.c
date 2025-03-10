#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int nbit_num=(a>>b)&1;
    printf("%d",nbit_num);
return 0;
  
}