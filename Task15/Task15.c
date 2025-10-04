#include <math.h>
#include <stdio.h>
int main() {
    int a, b;
    printf("Please enter integer 1: ");
    scanf("%d", &a);
    printf("\nPlease enter integer 2: ");
    scanf("%d", &b);

    printf("\nValue of a is %d and value of b is %d at the start", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nValue of a is %d and value of b is %d at the end", a, b);
    return 0;
}