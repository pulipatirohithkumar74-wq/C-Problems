#include <stdio.h>

int main()
{
    int choice;

    printf("=== POLICE CHASE ===\n");
    printf("1. Hide\n");
    printf("2. Run\n");
    printf("3. Fight\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("✅ You escaped!\n");
            break;

        case 2:
            printf("🚔 Police caught you!\n");
            break;

        case 3:
            printf("👊 You lost the fight!\n");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
