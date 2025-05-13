#include <stdio.h>

int main() {
    int num, sum = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum += num;

        printf("enter another number? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');  

    printf("numbers is: %d\n", sum);

    return 0;
}
