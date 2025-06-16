//555555555
// 4444444
//  33333
//   222
//    1
#include <stdio.h>

int main() {
    int i, j, num, count;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        num = 6 - i;
        count = 2 * num - 1;
        for(j = 1; j <= count; j++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
