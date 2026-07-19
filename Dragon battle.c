#include <stdio.h>

int main()
{
    int dragon = 100;
    int choice;

    while(dragon > 0)
    {
        printf("\nDragon HP = %d\n",dragon);
        printf("1.Sword\n");
        printf("2.Fire Spell\n");
        printf("3.Exit\n");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                dragon -= 20;
                break;

            case 2:
                dragon -= 35;
                break;

            case 3:
                return 0;
        }
    }

    printf("\n🐉 Dragon Defeated!");

    return 0;
}
