//C Program To Merge Two Arrays

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* mergeArrays(int arr1[], int n1, int arr2[], int n2) {
  
      int *res = (int*)malloc(sizeof(int) * n1 * n2);
  
    memcpy(res, arr1, n1 * sizeof(int));

    memcpy(res + n1, arr2, n2 * sizeof(int));
  
      return res;
}

int main() {
	int i;
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int* res = mergeArrays(arr1, n1, arr2, n2);

    for (i = 0; i < n1 + n2; i++)
        printf("%d ", res[i]);

    return 0;
}

