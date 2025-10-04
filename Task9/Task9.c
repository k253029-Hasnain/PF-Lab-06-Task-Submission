#include <math.h>
#include <stdio.h>
int main() {
    int numOfPeeps;
    printf("Please enter the number of Persons: ");
    scanf("%d", &numOfPeeps);
    int total = ceil(numOfPeeps*250.50);
    printf("\nThe total amount for %d Persons will be %d", numOfPeeps, total);
    return 0;
}