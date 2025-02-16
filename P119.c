//How to declare a Two Dimensional Array of pointers in C?

#include <stdio.h>

int main()
{
	int i,j;
	int arr1[5][5] = { { 0, 1, 2, 3, 4 },
					{ 2, 3, 4, 5, 6 },
					{ 4, 5, 6, 7, 8 },
					{ 5, 4, 3, 2, 6 },
					{ 2, 5, 4, 3, 1 } };
	int* arr2[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr2[i][j] = &arr1[i][j];
		}
	}
	printf("The values are\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", *arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}

