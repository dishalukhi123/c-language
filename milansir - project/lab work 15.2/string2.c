#include <stdio.h>
#include <string.h>

int main() {
    char inputEmail[50], inputPassword[50];
    const char correctEmail[] = "admin@gmail.com";
    const char correctPassword[] = "Admin@123";

    printf("Enter email: ");
    fgets(inputEmail, sizeof(inputEmail), stdin);
    // Remove trailing newline if present
    inputEmail[strcspn(inputEmail, "\n")] = '\0';

    printf("Enter password: ");
    fgets(inputPassword, sizeof(inputPassword), stdin);
    inputPassword[strcspn(inputPassword, "\n")] = '\0';

    // Compare email and password
    if (strcmp(inputEmail, correctEmail) == 0 && strcmp(inputPassword, correctPassword) == 0) {
        printf("Login successful! Welcome.\n");
    } else {
        printf("Invalid email or password. Access denied.\n");
    }

    return 0;
}
