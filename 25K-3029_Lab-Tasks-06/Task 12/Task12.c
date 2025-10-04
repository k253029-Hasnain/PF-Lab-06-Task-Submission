#include <math.h>
#include <stdio.h>
int main() {
    int inp;

    printf("Enter a number to check if its even or odd: ");
    scanf("%d",&inp);

    if ((inp & 1) == 0) printf("\n%d is an even number",inp);
    else printf("\n%d is an odd number",inp);
    return 0;
}