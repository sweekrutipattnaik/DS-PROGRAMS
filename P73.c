//C Program to Remove All Occurrences of an Element in an Array
 
#include <stdio.h> 

int remove_element(int* array, int n, int val) 
{ 
	int i; 
	 
	for (i = 0; i < n; i++) 
		 
		if (array[i] != val) 
			printf("%d ", array[i]); 
} 

int main() 
{ 
	int array[6] = { 1, 2, 1, 3, 1 }, size = 5, value = 1; 
	remove_element(array, size, value); 
}

