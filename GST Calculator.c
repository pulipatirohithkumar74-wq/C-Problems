#include <stdio.h>

int main()
{
    float amount, gst;

    scanf("%f",&amount);

    gst = amount * 18 / 100;

    printf("GST = %.2f\n", gst);
    printf("Total = %.2f", amount + gst);

    return 0;
}
