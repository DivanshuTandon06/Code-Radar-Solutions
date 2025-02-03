#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double d;
    scanf("%lf",&d);
    printf("You entered: %.4lf",d);
    return 0;
}