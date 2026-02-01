#include <stdio.h>

int main() {
    char otp[20];
    int i, len = 0, valid = 1;

    scanf("%s", otp);

    while (otp[len] != '\0') {
        len++;
    }

    if (len != 6) {
        valid = 0;
    }

    for (i = 0; i < len; i++) {
        if (otp[i] < '0' || otp[i] > '9') {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
