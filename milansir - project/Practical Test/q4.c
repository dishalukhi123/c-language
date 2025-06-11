#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    printf("Squares of elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");

    return 0;
}
