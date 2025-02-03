#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c,avg;
    scanf("%f %f %f",&a ,&b ,&c);
    avg=a+b+c/3;
    printf("Average: %f", avg);
    return 0;
}