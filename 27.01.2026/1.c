#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int i, valid = 1;

    // Read username
    scanf("%s", username);

    int len = strlen(username);

    // Rule 1: Length between 6 and 12
    if (len < 6 || len > 12) {
        valid = 0;
    }

    // Rule 2: Should not start with a digit
    if (username[0] >= '0' && username[0] <= '9') {
        valid = 0;
    }

    // Rule 3: Only lowercase letters and digits allowed
    for (i = 0; i < len; i++) {
        if ((username[i] >= 'a' && username[i] <= 'z') ||
            (username[i] >= '0' && username[i] <= '9')) {
            // allowed character
        } else {
            valid = 0;
            break;
        }
    }

    if (valid == 1)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
