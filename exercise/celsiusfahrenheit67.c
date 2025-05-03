#include<stdio.h>
int main()
{
    int cel,fah;

    printf("Enter a number of celsius:");
    scanf("%d",&cel);

    fah = cel * 1.8 + 32;

    printf("approximent valus :%d",fah);
    return 0;
}
