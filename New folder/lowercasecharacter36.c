#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
        printf("Converted to uppercase: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
        printf("Converted to lowercase: %c\n", ch);
    }
    else {
        printf("not an alphabet.\n");
    }

    return 0;
}
