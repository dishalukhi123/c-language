#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Approximant value A :%d\n", a);
    printf("Approximant value b :%d", b);

    return 0;
}