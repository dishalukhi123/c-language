// 11. Return sum from the function
#include <stdio.h>
int getAddition(int, int);
int main()
{
    int a = 10, b = 20, sum = 0;
    sum = getAddition(a, b);
    printf("Addition is %d\n", sum);
    // direct addition of values
    printf("Addition is %d\n", getAddition(20, 40));
    return 0;
}
int getAddition(int val1, int val2)
{
    return val1 + val2;
}
