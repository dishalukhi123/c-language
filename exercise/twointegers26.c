#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>  // for abs()

int main() {
    int a, b;
    bool result = false;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 5 || b == 5 || (a + b) == 5 || abs(a - b) == 5) {
        result = true;
    }

    if (result)
        printf("Result: true\n");
    else
        printf("Result: false\n");

    return 0;
}
