#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int i;
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    scanf("%s", password);

    int len = strlen(password);

    // Rule 1: Length check
    if (len < 8) {
        printf("Weak");
        return 0;
    }

    // Check each character
    for (i = 0; i < len; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
    }

    // Final validation
    if (hasUpper && hasLower && hasDigit)
        printf("Strong");
    else
        printf("Weak");

    return 0;
}
