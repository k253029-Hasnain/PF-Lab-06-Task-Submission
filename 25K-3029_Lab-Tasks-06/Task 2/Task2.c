#include <stdio.h>
int main()
{
    int inp;
    printf("Enter any Number to print its multiplication table: ");
    scanf("%d",&inp);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d",inp,i,inp*i);
    }
    return 0;
}