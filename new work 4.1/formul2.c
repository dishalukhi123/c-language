#include<stdio.h>
int main()
{
    int a,b,ans;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);

    ans = (a - b) * (a - b);

    printf("Approximant value :%d", ans);
    return 0;
}