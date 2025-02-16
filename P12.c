//Program to Print Prime Numbers From 1 to N
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
