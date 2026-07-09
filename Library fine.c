#include <stdio.h>

int main()
{
    int days;

    scanf("%d",&days);

    if(days<=7)
        printf("Fine = 0");
    else
        printf("Fine = %d", (days-7)*5);

    return 0;
}
