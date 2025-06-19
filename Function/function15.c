//15. Return addition, subtraction, division and multiplication from a single function.

#include <stdio.h>

int getCalculation(int, int, int);

int main()
{
    printf("Addition is %d\n", getCalculation(20, 40, 1));
    printf("Substraction is %d\n", getCalculation(40, 15, 2));
    printf("Division is %d\n", getCalculation(24, 3, 3));
    printf("Multiplication is %d\n", getCalculation(4, 6, 4));
    printf("Modular is %d\n", getCalculation(123, 10, 5));
    return 0;
}

// 1-Add, 2-Sub, 3-Div, 4-Mul, 5-mod
int getCalculation(int val1, int val2, int operation)
{
    if(operation == 1)
        return val1 + val2;
    else if(operation == 2)
        return val1 - val2;
    else if(operation == 3)
        return val1 / val2;
    else if(operation == 4)
        return val1 * val2;
    else if(operation == 5)
        return val1 % val2;
}
