//C Program To Print Character Pyramid Pattern

#include <stdio.h>

int main() {
    int n, i, j, k;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

