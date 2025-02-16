// c program to find Neon Number
#include <stdio.h>

int isNeonNumber(int num) {
    int sum = 0, square = num * num;

    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNeonNumber(num)) {
        printf("%d is a Neon Number.\n", num);
    } else {
        printf("%d is not a Neon Number.\n", num);
    }

    return 0;
}

