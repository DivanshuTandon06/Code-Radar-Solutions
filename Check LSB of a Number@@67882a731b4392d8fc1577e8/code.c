#include <stdio.h>

int main() {
    int a;
    scanf ("%d",&a);
    int lsb=a&1;
    if (lsb==1){
    printf("set");
    }
    else {
        printf("not set")
    }
    return 0;
}