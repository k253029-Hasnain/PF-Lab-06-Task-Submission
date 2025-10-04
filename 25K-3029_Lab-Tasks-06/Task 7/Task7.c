#include <stdbool.h>
#include <stdio.h>
int main() {
    int inp, c1 = 0, c5 = 0, c10 = 0, c25 = 0;
    printf("Enter The amount of money: ");
    scanf("%d", &inp);
    if (inp < 0)
    {
        printf("\nYou entered Negative Value!");
        return 0;
    }
    while (inp > 0) {
        if (inp >= 25)
        {
            c25++;
            inp -= 25;
        }
        else if (inp >= 10)
        {
            c10++;
            inp -= 10;
        }
        else if (inp >= 5)
        {
            c5++;
            inp -= 5;
        }
        else if (inp >= 1)
        {
            c1++;
            inp -= 1;
        }
    }
    printf("Amount of Coin:   Number of Coins:\n");
    printf("25 \t %d\n",c25);
    printf("10 \t %d\n",c10);
    printf("5 \t %d\n",c5);
    printf("1 \t %d\n",c1);
    return 0;
}