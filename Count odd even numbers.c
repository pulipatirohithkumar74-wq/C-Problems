#include <stdio.h>

int main() {
    int num, digit;
    int evenCount = 0, oddCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;  // Extract last digit
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        num = num / 10;     // Remove last digit
    }

    printf("Even digits = %d, Odd digits = %d\n", evenCount, oddCount);

    return 0;
}
