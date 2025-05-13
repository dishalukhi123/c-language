#include <stdio.h>

int main() {
    int num, temp, digit, sum, fact, i;

    printf("Strong numbers between 10 and 1000 are:\n");

    for (num = 10; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;

            fact = 1;
            for (i = 1; i <= digit; i++) {
                fact *= i;
            }

            sum += fact;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
