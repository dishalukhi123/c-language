//14. Return addition, subtraction, division and multiplication from the function
#include <stdio.h>
int getAddition(int, int);
int getSubstraction(int, int);
int getDivision(int, int);
int getMultiplication(int, int);
int main()
{
    printf("Addition is %d\n", getAddition(20, 40));
    printf("Substraction is %d\n", getSubstraction(40, 15));
    printf("Division is %d\n", getDivision(24, 3));
    printf("Multiplication is %d\n", getMultiplication(4, 6));
    return 0;
}
int getAddition(int val1, int val2)
{
    return val1 + val2;
}

int getSubstraction(int val1, int val2)
{
    return val1 - val2;
}

int getDivision(int val1, int val2)
{
    return val1 / val2;
}
int getMultiplication(int val1, int val2)
{
    return val1 * val2;
}