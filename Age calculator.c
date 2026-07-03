#include <stdio.h>

int main()
{
    int birth, current;

    printf("Birth Year: ");
    scanf("%d",&birth);

    printf("Current Year: ");
    scanf("%d",&current);

    printf("Age = %d", current - birth);

    return 0;
}
