//C Program to Check if String is Pangram
 
#include <stdbool.h> 
#include <stdio.h> 
#include <string.h> 
 
bool checkPangram(char str[]) 
{
    int i;
	bool mark[26];
 
	for (i = 0; i < 26; i++) 
		mark[i] = false;  
	int index; 
	size_t size = strlen(str); 
	for (i = 0; i < size; i++) {  
		if ('A' <= str[i] && str[i] <= 'Z') 
			index = str[i] - 'A'; 
		else if ('a' <= str[i] && str[i] <= 'z') 
			index = str[i] - 'a';  
		else
			continue; 

		mark[index] = true; 
	}  
	for (i = 0; i <= 25; i++) 
		if (mark[i] == false) 
			return (false); 
	return (true); 
}  
int main() 
{ 
	char str[] = "i am currently doing my Masters"; 
	if (checkPangram(str) == true) 
		printf(" %s is a pangram", str); 
	else
		printf(" %s is not a pangram", str); 
	return (0); 
} 

