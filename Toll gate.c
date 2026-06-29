#include <stdio.h>

int main()
{
    int type;

    printf("1.Car\n2.Bus\n3.Truck\n");
    scanf("%d",&type);

    switch(type)
    {
        case 1: printf("Toll = 100"); break;
        case 2: printf("Toll = 200"); break;
        case 3: printf("Toll = 300"); break;
        default: printf("Invalid");
    }

    return 0;
}
