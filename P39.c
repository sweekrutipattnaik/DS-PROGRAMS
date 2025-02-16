//C Program For Printing Inverted Pyramid

#include <stdio.h>

int main() {
    int i, j, r;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i = r; i >= 1; i--) {
     
        for(j = 1; j <= r-i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

