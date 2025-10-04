#include <math.h>
#include <stdio.h>
int main() {
    double h, theta;

    printf("Enter the height of building: ");
    scanf("%lf", &h);
    printf("\nEnter the angle of Sun's Elevation in radian: ");
    scanf("%lf", &theta);

    double L = h / tan(theta);
    printf("\nThe Length of the shadow of the building will be: %.2lfm", L);
    return 0;
}