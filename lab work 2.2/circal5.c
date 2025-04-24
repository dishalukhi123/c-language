#include <stdio.h>

int main()
{
    float r, area;
    const float PI = 3.1416;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
