//C Program For Hexadecimal to Decimal Conversion
 
#include <math.h> 
#include <stdio.h> 
#include <string.h> 
int main() 
{ 

	char hexdecnumber[32] = "2D"; 
	int decimalnumber, i;  
	int cnt; 
	int digit; 

	cnt = 0; 
	decimalnumber = 0;  
	for (i = (strlen(hexdecnumber) - 1); i >= 0; i--) { 
		switch (hexdecnumber[i]) { 
		case 'A': 
			digit = 10; 
			break; 
		case 'B': 
			digit = 11; 
			break; 
		case 'C': 
			digit = 12; 
			break; 
		case 'D': 
			digit = 13; 
			break; 
		case 'E': 
			digit = 14; 
			break; 
		case 'F': 
			digit = 15; 
			break; 
		default: 
			digit = hexdecnumber[i] - 0x30; 
		}  
		decimalnumber = decimalnumber + (digit)*pow((double)16, (double)cnt); 
		cnt++; 
	} 
	printf("Decimal number is: %d", decimalnumber); 
	return 0; 
}


