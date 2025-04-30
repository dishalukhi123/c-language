#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999 || num <= -100 && num >= -999) {
        printf("number three-digit number.\n");
    } else {
        printf("number is NOT a three-digit number.\n");
    }

    return 0;
}
