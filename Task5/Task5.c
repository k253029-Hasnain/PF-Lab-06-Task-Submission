#include <stdbool.h>
#include <stdio.h>
int main()
{
    int inp, res=1;
    printf("Enter the number of participants: ");
    scanf("%d",&inp);
    for (int i=1; i<=inp; i++)
    {
        res*=i;
    }
    printf("\nThe total ways to arrange these participants is: %d",res);
    return 0;
}