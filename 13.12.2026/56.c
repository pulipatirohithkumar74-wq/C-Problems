#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, i, fact;

    scanf("%d", &n);
    temp = n;

    while (n > 0) {
        digit = n % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
