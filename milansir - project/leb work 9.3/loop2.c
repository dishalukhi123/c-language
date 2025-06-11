#include <stdio.h>

int main() {
    int val, i,result = 1;

    printf("Enter a number: ");
    scanf("%d", &val);

    printf("Factorial expression: ");
    for (i = 1; i <= val; i++) {
        result *= i;
        printf("%d", i);
        if (i < val) {
            printf(" * ");
        }
    }

    printf(" = %d\n", result);

    return 0;
}
