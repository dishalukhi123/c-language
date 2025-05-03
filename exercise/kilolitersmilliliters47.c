#include<stdio.h>
int main()
{
    float km,mtr,cm,mill;

    printf("Enter e number : ");
    scanf("%f",&km);

    mtr = km * 1000;
    cm = mtr * 100;
    mill = cm * 10;

    printf("Kilometers to Millimeters :%.2f",mill);
    
    return 0;
}
