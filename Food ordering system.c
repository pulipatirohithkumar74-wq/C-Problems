#include <stdio.h>

int main()
{
    int burger, pizza, total;

    scanf("%d %d",&burger,&pizza);

    total = burger*120 + pizza*250;

    printf("Bill = %d",total);

    return 0;
}
