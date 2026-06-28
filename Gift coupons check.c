#include <stdio.h>

int main()
{
    int amount;

    scanf("%d",&amount);

    if(amount >= 5000)
        printf("Coupon Worth ₹500");
    else if(amount >= 2000)
        printf("Coupon Worth ₹200");
    else
        printf("No Coupon");

    return 0;
}
