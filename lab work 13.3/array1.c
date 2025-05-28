#include <stdio.h>

int main() {
    int i, j, n1, n2, sum = 0;  
    float avg;

    printf("Enter array's row size n1: ");
    scanf("%d", &n1);

    printf("Enter array's column size n2: ");
    scanf("%d", &n2);

    int a[n1][n2];
    int total_elements = n1 * n2;

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    avg = (float)sum / total_elements;

    printf("Average is %.2f\n", avg);

    return 0;
}
