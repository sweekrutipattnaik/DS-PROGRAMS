//C Program to Remove Duplicates from Sorted Array

#include <stdio.h>

int removeDup(int arr[], int n) {
	int i,j = 0;
    if (n == 0) return 0;
 
    for (i = 1; i < n - 1; i++) {
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
  
    return j + 1;
}

int main() {
	int i;
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    n = removeDup(arr, n);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

