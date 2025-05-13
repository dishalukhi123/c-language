#include <stdio.h>

int main() {
    int val, digit, fact, sum = 0, tmp;

    printf("Enter a number: ");
    scanf("%d", &val);

    tmp = val; 

    while (val > 0) {
        digit = val % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        val = val / 10;
    }

    if (tmp == sum) {
        printf("Strong number\n");
    } else {
        printf("Not a strong number\n");
    }

    return 0;
}
