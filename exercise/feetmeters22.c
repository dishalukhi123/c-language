#include<stdio.h>
int main()
{

    float feet , mtr;

    printf("Enter a number :");
    scanf("%f",&feet);

    mtr = feet * 0.3048;

    printf("your meters : %f",mtr);
    
    return 0;
}
