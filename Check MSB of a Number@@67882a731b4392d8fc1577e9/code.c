#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int msb=a>>7;
    if (msb==7){
        printf("Set");
    }
    else{
    printf("Not Set");
}
    return 0;
}