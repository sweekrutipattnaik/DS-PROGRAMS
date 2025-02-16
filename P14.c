//Program to Find Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest = %.2f\n", compoundInterest);
    return 0;
}
