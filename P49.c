//C Program to Print Floyd’s Triangle Pyramid Patterns

#include <stdio.h>

int main() {
    int n = 5, c = 1,i,j;
    
    
    for (i = 0; i < n; i++) {

        for (j = 0; j <= i; j++) {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}

