#include <stdio.h>

int main() {
    float feet,cen;

    printf("Enter a number: ");
    scanf("%f", &feet); 

    cen = feet * 30.48;

    printf("Feet to centimeters: %.2f\n", cen);

    return 0;
}
