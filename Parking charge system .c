#include <stdio.h>

int main()
{
    int hours, charge;

    scanf("%d",&hours);

    if(hours <= 2)
        charge = 20;
    else
        charge = 20 + (hours-2)*10;

    printf("Parking Charge = %d",charge);

    return 0;
}
