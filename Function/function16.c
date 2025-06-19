//16. Write a program to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
int getSumOfRange(int);
int main()
{
    int val;
    int sum;
    printf("Input the last number of the range from 1 to : ");
    scanf("%d", &val);
    sum = getSumOfRange(val);
    printf("\nThe sum of numbers from 1 to %d : %d\n\n", val, sum);
    return (0);
}
int getSumOfRange(int n1)
{
    int res;
    if (n1 == 1)
        return (1);
    else
        res = n1 + getSumOfRange(n1 - 1); //calling function itself
    return (res);
}
