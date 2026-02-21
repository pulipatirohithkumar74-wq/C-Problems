#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 15);
    }

    // Add 10% surcharge if bill > 2000
    if (bill > 2000) {
        bill = bill + (bill * 0.10);
    }

    printf("Total Electricity Bill = %.2f\n", bill);

    return 0;
}
