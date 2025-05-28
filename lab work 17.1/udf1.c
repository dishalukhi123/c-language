#include <stdio.h>

// Function to calculate cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("Cube of %d is %d\n", number, result);

    return 0;
}
