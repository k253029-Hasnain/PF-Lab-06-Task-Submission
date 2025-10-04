#include <stdio.h>
int main()
{
    int inp=0, balance=50000;
    while ( (balance) > 0)
    {
        printf("\nEnter your withdrawal amount: ");
        scanf("%d",&inp);
        if ( (balance-inp)<0)
        {
            printf("\nInsufficient funds for transaction amount of %d\n",inp);
        }
        else
        {
            balance-=inp;
            inp=0;
            printf("\nWithdawing.... Thank You For Waiting, Here is your amount!\n");
            printf("\nCurrent Balance: %d",balance);
        }
    }
    printf("\nError! Account balance is 0! Exiting....");
    return 0;
}