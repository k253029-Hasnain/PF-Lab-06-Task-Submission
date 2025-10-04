#include <stdbool.h>
#include <stdio.h>
int main()
{
    int inp;
    bool isArmstrong = false;
    printf("Enter an integer (1-9999) to check if its an Armstrong number: ");
    scanf("%d",&inp);
    if (inp >= 0 && inp < 10)
    {
        isArmstrong = true;
    }
    else if (inp >= 10 && inp < 100)
    {
        int dig1 = inp / 10;
        int dig2 = inp % 10;
        if ( (dig1*dig1) + (dig2*dig2) ==  inp ) isArmstrong = true;
    } else if (inp >= 100 && inp < 1000)
    {
        int dig1 = inp / 100;
        int dig2 = (inp / 10) % 10;
        int dig3 = inp % 10;
        if ( (dig1*dig1*dig1) + (dig2*dig2*dig2) + (dig3*dig3*dig3) ==  inp ) isArmstrong = true;
    } else if (inp >= 1000 && inp < 10000)
    {
        int dig1 = inp / 1000;
        int dig2 = (inp / 100) % 10;
        int dig3 = (inp / 10) % 10;
        int dig4 = inp % 10;
        if ( (dig1*dig1*dig1*dig1) + (dig2*dig2*dig2*dig2) + (dig3*dig3*dig3*dig3) + (dig4*dig4*dig4*dig4) ==  inp ) isArmstrong = true;
    } else
    {
        printf("\nInput is Out of range!");
        return 0;
    }
    if (isArmstrong) printf("\n%d is an Armstrong Number",inp);
    else printf("\n%d is NOT an Armstrong Number",inp);
    return 0;
}