#include<stdio.h>
int main()
{
    int kl,ltr;

    printf("Enter a numer od kiloliter : ");
    scanf("%d",&kl);

    ltr = kl * 1000;

    printf("approxiemant value : %d",ltr);
    return 0;
}
