//13579
// 3579
//  579
//   79
//    9
#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        for(j = 2 * i - 1; j <= 9; j += 2) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
