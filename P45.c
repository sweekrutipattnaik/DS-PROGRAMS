//C Program To Print Inverted Hollow Pyramid Patterns

#include <stdio.h>

int main() {
    int n = 5,i,j;
    for (i = 0; i < n; i++) {
 
        for (j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

