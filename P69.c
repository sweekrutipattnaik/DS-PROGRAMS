//C Program to Sort the Elements of an Array in Descending Order

#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
	int i;
    int arr[] = {1, 3, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), comp);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

