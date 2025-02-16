//C Program for Selection Sort

#include <stdio.h>

void selectionSort(int arr[], int N) {
	int i,j;
    for (i = 0; i < N - 1; i++) {

        int min_idx = i;
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
	int i;
    int arr[] = {64, 25, 12, 22, 11};
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
  
    selectionSort(arr, N);

    printf("Sorted array: \n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

