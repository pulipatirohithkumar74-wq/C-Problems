#include <stdio.h>

int main()
{
    int battery;

    scanf("%d",&battery);

    if(battery <= 20)
        printf("Charge Now");
    else if(battery <= 50)
        printf("Battery Medium");
    else
        printf("Battery Full");

    return 0;
}
