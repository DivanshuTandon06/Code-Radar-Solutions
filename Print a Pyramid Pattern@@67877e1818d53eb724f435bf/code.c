#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        for (int j=2 ;j<=i+2;j++){
            if(j%2==0)
            printf(" ");
            else 
            printf("*");
        }
        printf("\n");
    }
}