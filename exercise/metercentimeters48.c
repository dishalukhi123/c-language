#include<stdio.h>
int main()
{
    int mtr,cm;

    printf("Enter a number : ");
    scanf("%d",&mtr);

    cm = mtr * 100;

    printf("meter to centimeters : %d",cm);
    return 0;
}
