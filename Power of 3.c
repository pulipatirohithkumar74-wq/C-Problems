#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Not Power of 3");
        return 0;
    }

    while (n % 3 == 0)
    {
        n = n / 3;
    }

    if (n == 1)
        printf("Power of 3");
    else
        printf("Not Power of 3");

    return 0;
}
