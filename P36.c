//C Program to Find the Sum of Fibonacci Numbers at Even Indexes up to N Terms

#include <stdio.h>
int main() {
    int i, n, a = 0, b = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
  
        if (i % 2 == 0) {
            sum += a;  
        }

        int next = a + b;
        a = b;
        b = next;
    }
    printf("Sum of Fibonacci numbers at even indexes up to %d terms: %d\n", n, sum);

    return 0;
}

