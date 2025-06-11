#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];  
    for(i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Length of the array: %d\n", n);

    return 0;
}
