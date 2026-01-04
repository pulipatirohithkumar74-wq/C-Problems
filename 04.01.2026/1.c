#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {   // take one number at a time
        isPrime = 1;            // assume it is prime

        for (j = 2; j <= i / 2; j++) {  // check divisibility
            if (i % j == 0) {   // if divisible
                isPrime = 0;    // not prime
                break;
            }
        }

        if (isPrime)            // if still prime
            printf("%d ", i);   // print it
    }

    return 0;
}
