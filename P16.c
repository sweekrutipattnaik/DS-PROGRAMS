#include <stdio.h>
int main()
{
    int num=5;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
	 {
        printf("The number is positive.\n");
    } else if (num < 0)
	 {
        printf("The number is negative.\n");
    } else
	 {
        printf("The number is zero.\n");
    }

    return 0;
}

