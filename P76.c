//C Program for Program for array rotation

#include <stdio.h>
void leftRotateByOne(int arr[], int n)
{
	int i;
    int temp = arr[0];
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
	int i;
    for (i = 0; i < d; i++) {
        leftRotateByOne(arr, n);
    }
}
void printArray(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    leftRotate(arr, d, n);

    printf("Array  after rotated by %d positions is: ", d);
    printArray(arr, n);

    return 0;
}

