//10. Return value from the function
#include <stdio.h>
int getValue(int);
int main()
{
    int i;
    i = getValue(34);
    printf("Value = %d\n", i);
    // direct way to get value
    printf("Value = %d\n", getValue(45));
    return 0;
}
int getValue(int val)
{
    return val;
}