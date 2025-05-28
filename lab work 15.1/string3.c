#include <stdio.h>

int main() {
    char str[50];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;  
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; 
        }
    }

    printf("String in toggle case: %s\n", str);

    return 0;
}
