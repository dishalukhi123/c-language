#include <stdio.h>
void doSum(int, int);
int main()
{
    doSum(20, 40);
    doSum(40, 50);
    doSum(12, 12);
    return 0;
}
void doSum(int val1, int val2)
{
    int sum = 0;
    sum = val1 + val2;
    printf("The sum of %d and %d is %d\n", val1, val2, sum);
}