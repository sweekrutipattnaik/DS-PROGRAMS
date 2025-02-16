//C Program to Interchange Elements of First and Last in a Matrix Across Columns
 
#include <stdio.h> 
#define n 3  

void interchangeFirstLast(int mat[][n]) 
{  
    int i;
	for (i = 0; i < n; i++) { 
		int t = mat[i][0]; 
		mat[i][0] = mat[i][n - 1]; 
		mat[i][n - 1] = t; 
	} 
}
int main() 
{  
    int i,j;
	int mat[n][n] = { { 2, 4, 6 }, { 8, 2, 3 }, { 1, 9, 4 } }; 
	printf("Input Matrix: \n"); 
	for (i = 0; i < n; i++) { 
		for (j = 0; j < n; j++) { 
			printf("%d ", mat[i][j]); 
		} 
		printf("\n"); 
	} 

	interchangeFirstLast(mat); 
	printf("Output Matrix: \n"); 
	for (i = 0; i < n; i++) { 
		for (j = 0; j < n; j++) { 
			printf("%d ", mat[i][j]); 
		} 
		printf("\n"); 
	} 
}

