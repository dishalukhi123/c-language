#include<stdio.h>
int main()
{
    float cm,feet;
    printf("Enter a number of centimeter :");
    scanf("%f",&cm);

    feet = cm * 30.48;

    printf("approximent value : %f",feet);
    return 0;
}
