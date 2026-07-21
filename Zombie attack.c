#include <stdio.h>

int main()
{
    int zombies = 5;
    int choice;

    while(zombies > 0)
    {
        printf("\nZombies Left = %d\n",zombies);
        printf("1.Shoot\n2.Run\n");

        scanf("%d",&choice);

        if(choice == 1)
        {
            zombies--;
            printf("💥 Zombie Killed!\n");
        }
        else
        {
            printf("🏃 You Escaped!\n");
            break;
        }
    }

    if(zombies == 0)
        printf("🏆 You Won!");

    return 0;
}
