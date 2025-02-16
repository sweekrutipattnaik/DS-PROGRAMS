#include<stdio.h>
int main()
{
    int n,sum =0,temp,r;
    printf("enter a number :");
    scanf("%d",&n);
    for(temp=n;n!=0;n = n/10)
    {
        r = n % 10;
        sum = sum*10 + r;
    }
    if(sum==temp)
        printf("%d is an palindrome number.\n",temp);
    else
        printf("%d is not an palindrome number .\n",temp);
    getch();
}
