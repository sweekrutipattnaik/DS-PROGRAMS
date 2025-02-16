#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("swap of 2 number is a=%d b=%d",a,b);
    return 0;
}   
    
