//C Program To Calculate the Power of a Number
#include <stdio.h> 
long power(int x, unsigned n) 
{  
    int i;
	long long pow = 1; 
	for (i = 0; i < n; i++) { 
		pow = pow * x; 
	} 

	return pow; 
} 
int main(void) 
{ 

	int x = 2; 
	unsigned n = 3;  
	int result = power(x, n); 
	printf("%d", result); 

	return 0; 
}

