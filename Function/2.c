//2. Write C to check prime and armstrong numbers using function.
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is not a Prime number.\n", number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
