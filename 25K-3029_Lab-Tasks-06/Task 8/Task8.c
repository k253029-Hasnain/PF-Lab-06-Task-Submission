#include <math.h>
#include <stdio.h>
int main() {
    float intensity, SRV;
    printf("Enter the intensity of the Earthquake: ");
    scanf("%f", &intensity);
    printf("\nEnter the Standard Reference Value: ");
    scanf("%f", &SRV);
    double magnitude = log10(intensity/SRV);
    printf("\nThe Magnitude of the Earthquake is: %.3lf",magnitude);
    return 0;
}