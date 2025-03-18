#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=o;i<a;i++){
        for (int j=0 ;j<=i;j++){
            if(j%2==0)
            printf(" ");
            else 
            printf("*");
        }
        printf("\n");
    }
}