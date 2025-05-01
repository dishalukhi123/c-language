#include <stdio.h>

int main() {
    int choice;
    int a, b, c, sum;

    printf("Enter 2 to add two numbers or 3 to add three numbers: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("Sum = %d\n", sum);
    }
    else if (choice == 3) {
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        printf("Sum = %d\n", sum);
    }
    else {
        printf("Invalid input. Please enter 2 or 3.\n");
    }

    return 0;
}
