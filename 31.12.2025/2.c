#include <stdio.h>

int main() {
    int n, rem, rev = 0;
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;          // Get last digit
        rev = rev * 10 + rem;  // Add to reverse number
        n = n / 10;            // Remove last digit
    }

    printf("%d", rev);

    return 0;
}
