#include <math.h>
#include <stdio.h>
int main() {
    double p, r, n, t;
    
    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("\nEnter the annual interest rate (in percentage): ");
    scanf("%f", &r);
    printf("\nEnter the the number of times the interest is applied in a year: ");
    scanf("%f", &n);
    printf("\nEnter the number of years: ");
    scanf("%f", &t);

    r/=100;
    double A = p * ( pow(( 1+(r/n) ),(n*t)) );
    
    printf("\nThe value of investment is %.2f", A);
    return 0;
}