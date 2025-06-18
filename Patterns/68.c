//543212345
//5432 2345
//543   345
//54     45
//5       5
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 6 - i; j >= 1; j--) {
            printf("%d", j);
        }

        for(j = 1; j <= 2 * (i - 1); j++) {
            printf(" ");
        }

        for(j = 1; j <= 6 - i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
