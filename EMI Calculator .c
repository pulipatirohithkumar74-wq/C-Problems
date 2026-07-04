#include <stdio.h>

int main()
{
    float loan, months;

    printf("Loan Amount: ");
    scanf("%f",&loan);

    printf("Months: ");
    scanf("%f",&months);

    printf("Monthly EMI = %.2f", loan/months);

    return 0;
}
