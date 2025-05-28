#include <stdio.h>

int main() {
    int a[5][5];
    int i, j, sum = 0;

    printf("Enter elements for 5x5 matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nBoundary elements:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d", a[i][j]);
                sum += a[i][j];
            } else {
                printf(" ");  
            }
        }
        printf("\n");
    }

    printf("\nSum of boundary elements: %d\n", sum);

    return 0;
}
