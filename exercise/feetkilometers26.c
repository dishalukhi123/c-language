#include<stdio.h>
int main()
{

    float feet , mtr ,km;

    printf("Enter a number :");
    scanf("%f",&feet);

    mtr = feet * 0.3048;
    km = mtr / 1000;

    printf("your Kilometers : %f",km);
    
    return 0;
}
