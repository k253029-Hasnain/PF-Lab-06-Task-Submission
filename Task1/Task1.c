//                      Answer:
// The while loop is better for user input in this case because we do not know
// beforehand how many times the user will enter values. A while loop keeps running
// until the condition becomes false (when the user enters zero), making it more
// suitable than a for loop which needs a fixed number of iterations.

#include <stdio.h>
int main()
{
    int inp=1, sum=0;
    while(inp!=0)
    {
        printf("\nEnter a number to add into the total sum (Enter 0 to exit): ");
        scanf("%d",&inp);
        sum+=inp;
        printf("The current sum of entered numbers is: %d ",sum);
    }
    printf("\nSum of entered numbers is: %d",sum);
    return 0;
}