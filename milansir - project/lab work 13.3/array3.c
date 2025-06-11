#include <stdio.h>

int main() {
    int i, j, n, sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("\nEnter elements for the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += a[i][n - 1 - i];  // i + j == n - 1  => j = n - 1 - i
    }

    printf("\nAnti-diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][n - 1 - i]);
    }

    printf("\nSum of anti-diagonal elements = %d\n", sum);

    return 0;
}
