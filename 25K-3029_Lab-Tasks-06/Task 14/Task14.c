#include <math.h>
#include <stdio.h>
int main() {
    int inp;
    printf("Enter a number: ");
    scanf("%d",&inp);

    printf("\n%d x 2 = %d",inp, (inp << 1) );
    printf("\n%d x 4 = %d",inp, (inp << 2) );
    printf("\n%d x 8 = %d",inp, (inp << 3) );
    return 0;
}