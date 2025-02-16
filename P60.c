//c program to print a 2d array

#include <stdio.h>

int main() {
    int i,j;
    int rows = 3, cols = 3;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

