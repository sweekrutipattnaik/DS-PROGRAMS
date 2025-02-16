//C Program To Print Reverse Floyd’s Pattern

#include <stdio.h>

int main() {
  
    int n = 4 ,i,j;  
    int c = n * (n + 1) / 2;

    for (i = n; i >= 1; i--) {

        for (j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }

    return 0;
}

