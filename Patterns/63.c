//123454321
//1234 4321
//123   321
//12     21
//1       1
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 6 - i; j++) {
            printf("%d", j);
        }

        for(j = 1; j <= 2 * (i - 1); j++) {
            printf(" ");
        }

        for(j = 5 - i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
