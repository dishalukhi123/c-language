#include<stdio.h>
int main()
{
    int mtr = 1000,mile;

    printf("Enter a number :");
    scanf("%d",&mtr);

    mile = mtr / 1.60934;

    printf("meters to miles : %d",mile);
    return 0;
}
