#include <stdio.h>

int main() {
    char op;
    int a, b;
    float result;

    printf("Select operation (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (op == '+') {
        result = a + b;
        printf("Result: %d + %d = %.2f\n", a, b, result);
    }
    else if (op == '-') {
        result = a - b;
        printf("Result: %d - %d = %.2f\n", a, b, result);
    }
    else if (op == '*') {
        result = a * b;
        printf("Result: %d * %d = %.2f\n", a, b, result);
    }
    else if (op == '/') {
        if (b != 0) {
            result = (float)a / b;
            printf("Result: %d / %d = %.2f\n", a, b, result);
        } else {
            printf("Error: Division by zero!\n");
        }
    }
    else if (op == '%') {
        if (b != 0) {
            printf("Result: %d %% %d = %d\n", a, b, a % b);
        } else {
            printf("Error: Modulo by zero!\n");
        }
    }
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}
