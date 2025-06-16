//123454321
// 2345432
//  34543
//   454
//    5
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }

        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }

        for(j = 5 - 1; j >= i; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
