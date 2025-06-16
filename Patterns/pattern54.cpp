//    5
//   454
//  34543
// 2345432
//123454321
#include <stdio.h>

int main() {
    int i, j, space, num;

    for(i = 1; i <= 5; i++) {
        for(space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        num = 6 - i;
        for(j = 1; j <= i; j++) {
            printf("%d", num++);
        }

        num -= 2;
        for(j = 1; j < i; j++) {
            printf("%d", num--);
        }

        printf("\n");
    }

    return 0;
}




