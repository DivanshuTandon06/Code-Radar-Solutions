#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2!=0 ){
        if (a%3!=0){
            if(a%5!=0){
    printf("Prime");}
        }
    }
    else 
    printf("Not Prime");
    return 0;
}