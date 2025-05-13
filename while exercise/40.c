#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    if (num < 0) {
        printf("Minus ");
        num = -num;
    }

    int temp = num;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }

    while (rev > 0) {
        int digit = rev % 10;

        if (digit == 0) printf("Zero ");
        else if (digit == 1) printf("One ");
        else if (digit == 2) printf("Two ");
        else if (digit == 3) printf("Three ");
        else if (digit == 4) printf("Four ");
        else if (digit == 5) printf("Five ");
        else if (digit == 6) printf("Six ");
        else if (digit == 7) printf("Seven ");
        else if (digit == 8) printf("Eight ");
        else if (digit == 9) printf("Nine ");

        rev /= 10;
    }

    printf("\n");
    return 0;
}
