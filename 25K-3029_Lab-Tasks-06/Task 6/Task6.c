#include <stdbool.h>
#include <stdio.h>
int main() {
    int num, rev = 0, lastDig;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        lastDig = num % 10;
        rev = (rev * 10) + lastDig;
        num = num / 10;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}