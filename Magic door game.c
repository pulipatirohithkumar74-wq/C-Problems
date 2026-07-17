#include <stdio.h>

int main()
{
    int door;

    printf("Choose a Door (1-3): ");
    scanf("%d",&door);

    switch(door)
    {
        case 1:
            printf("💰 You found Treasure!\n");
            break;

        case 2:
            printf("👻 Ghost Attacked You!\n");
            break;

        case 3:
            printf("🚪 Secret Exit! You Win!\n");
            break;

        default:
            printf("Wrong Choice\n");
    }

    return 0;
}
