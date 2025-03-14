#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}