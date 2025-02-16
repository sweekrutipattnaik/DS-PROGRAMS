//C Program to Interchange Elements of First and Last in a Matrix Across Rows

#include <stdio.h>

#define n 3
void interchangeFirstLast(int m[][n])
{
	int i;
	int rows = n;
	for (i = 0; i < n; i++) 
	{
		int t = m[0][i];
		m[0][i] = m[rows - 1][i];
		m[rows - 1][i] = t;
	}
}
int main()
{
	int i,j;
	int m[n][n] = {{6, 3, 1}, 
				{4, 5, 2}, 
				{2, 4, 9}};
	printf("Input Matrix: \n");
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	interchangeFirstLast(m);
	printf("\nOutput Matrix: \n");
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

