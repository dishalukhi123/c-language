#include <stdio.h>
int main()
{
    int amount, nots;

    printf("Enter a Amount :");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        nots = amount / 500;
        printf("your 500 notes  is :%d\n", nots);
        amount = amount - (nots * 500);
    }
    if (amount >= 200)
    {
        nots = amount / 200;
        printf("your 200 notes  is :%d\n", nots);
        amount = amount - (nots * 200);
    }
    if (amount >= 100)
    {
        nots = amount / 100;
        printf("your 100 notes  is :%d\n", nots);
        amount = amount - (nots * 100);
    }
    if (amount >= 50)
    {
        nots = amount / 50;
        printf("your 50 notes  is :%d\n", nots);
        amount = amount - (nots * 50);
    }
    if (amount >= 20)
    {
        nots = amount / 20;
        printf("your 20 notes  is :%d\n", nots);
        amount = amount - (nots * 20);
    }
    if (amount >= 10)
    {
        nots = amount / 10;
        printf("your 10 notes  is :%d\n", nots);
        amount = amount - (nots * 10);
    }
    if (amount >= 5)
    {
        nots = amount / 5;
        printf("your 5 notes  is :%d\n", nots);
        amount = amount - (nots * 5);
    }
    if (amount >= 2)
    {
        nots = amount / 2;
        printf("your 2 notes  is :%d\n", nots);
        amount = amount - (nots * 2);
    }
    if (amount >= 1)
    {
        nots = amount / 1;
        printf("your 1 notes  is :%d\n", nots);
        amount = amount - (nots * 1);
    }
    else
    {
        printf("Invilde input");
    }

    return 0;
}
