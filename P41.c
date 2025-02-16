////C Program to Print character Pattern

#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces for the left side
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

