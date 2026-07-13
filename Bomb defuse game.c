#include <stdio.h>

int main()
{
    int wire;

    printf("Choose Wire\n");
    printf("1.Red\n2.Blue\n3.Green\n");

    scanf("%d",&wire);

    if(wire == 2)
        printf("✅ Bomb Defused!\n");
    else
        printf("💥 BOOM! Game Over!\n");

    return 0;
}
