#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, firstDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    lastDigit = number % 10;

    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}
