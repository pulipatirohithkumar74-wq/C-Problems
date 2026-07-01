#include <stdio.h>

int main()
{
    int xp;

    scanf("%d",&xp);

    if(xp >= 1000)
        printf("Level 10");
    else if(xp >= 500)
        printf("Level 5");
    else
        printf("Level 1");

    return 0;
}
