#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);

    a = b + b;
    b = a - b;
    a = a - b;

    printf("Approximant value :%d\n", a);
    printf("Approximant value :%d", b);

    return 0;
}