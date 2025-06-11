#include <stdio.h>

// Function to calculate sum of alternate elements
int sumAlternate(int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}


int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int result = sumAlternate(arr, n);
    printf("Sum of alternate elements: %d\n", result);

    return 0;
}
