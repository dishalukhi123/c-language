//5. Write C Program to convert binary number to decimal using function.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    return decimal;
}

int main() {
    long long binary;
    int result;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    result = binaryToDecimal(binary);

    printf("Decimal: %d\n", result);

    return 0;
}