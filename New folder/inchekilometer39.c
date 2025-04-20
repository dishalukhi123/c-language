#include<stdio.h>
int main()
{
    float inch,mill,cm,mtr,km;

    printf("Enter a number : ");
    scanf("%f",&inch);

    mill = inch * 12 ;
    cm = mill * 10;
    mtr = cm * 100;
    km = mtr * 1000;

    printf("inche to kilometer : %.2f", km);
    return 0;
}
