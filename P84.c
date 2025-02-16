//C Program to Print Boundary Elements of a Matrix

#include <stdio.h>
void printBoundary(int mat[][4], int m, int n)
{
	int i,j;
	printf("\n Boundary of Matrix \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == n - 1
				|| j == n - 1)
				printf(" %d", mat[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	int i,j;
	int mat[4][4] = { { 1, 2, 3, 4 },
					{ 1, 2, 3, 4 },
					{ 1, 2, 3, 4 },
					{ 1, 2, 3, 4 } };

	printf("\n Input Matrix \n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf(" %d", mat[i][j]);
		}
		printf(" \n");
	}
	printBoundary(mat, 4, 4);
	return 0;
}

