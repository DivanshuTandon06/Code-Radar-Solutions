#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int msb=a&1;
    if (msb==0){
        printf("Set");
    }
    else{
    printf("Not Set");
}
    return 0;
}