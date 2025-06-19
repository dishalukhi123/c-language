//6. Write C program to print all strong numbers between 1 to 100 using function.
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int original = num;
    int sum = 0;

    while(num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    printf("Strong numbers between 1 and 100 are:\n");

    for(int i = 1; i <= 100; i++) {
        if(isStrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
