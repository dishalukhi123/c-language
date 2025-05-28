#include <stdio.h>
#include <ctype.h>  // for isalpha(), isdigit()

int main() {
    char password[100];
    int i;
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    int length = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] == '\n') {
            password[i] = '\0';
            break;
        }
    }
    length = i;

    if (length < 6) {
        printf("Password is too short. It must be at least 6 characters.\n");
        return 0;
    }

    for (i = 0; i < length; i++) {
        if (isalpha(password[i])) {
            hasLetter = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else {
            hasSpecial = 1;
        }
    }

    if (hasLetter && hasDigit && hasSpecial) {
        printf("Password is strong.\n");
    } else {
        printf("Password is NOT strong. It must contain at least one letter, one digit, and one special symbol.\n");
    }

    return 0;
}
