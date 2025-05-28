#include <stdio.h>

int isDivisibleBy3And5(int num) {
    if (num % 3 == 0 && num % 5 == 0)
        return 1;  // divisible
    else
        return 0;  // not divisible
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDivisibleBy3And5(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is NOT divisible by both 3 and 5.\n", number);
    }

    return 0;
}
