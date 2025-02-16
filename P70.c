//C Program to Sort an Array in Ascending Order

#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    
    return (*(int*)a - *(int*)b);
}

int main() {
	int i;
    int arr[] = { 2 ,6, 1, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), comp);

    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]);
   
    return 0;
}

