#include <stdio.h>

int main() {
    int a, b, c, sum = 0;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 13) {
        sum = 0;
    } else if (b == 13) {
        sum = a;
    } else if (c == 13) {
        sum = a + b;
    } else {
        sum = a + b + c;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
