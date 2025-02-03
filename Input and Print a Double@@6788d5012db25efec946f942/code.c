#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float d;
    scanf("%f",&d);
    printf("You entered: %.4f",d);
    return 0;
}