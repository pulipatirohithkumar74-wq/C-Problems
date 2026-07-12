#include <stdio.h>

int main()
{
    int choice;
    int key = 0;

    printf("=================================\n");
    printf("      MYSTERY HOUSE GAME\n");
    printf("=================================\n");

    while(1)
    {
        printf("\nWhere do you want to go?\n");
        printf("1. Open the Door\n");
        printf("2. Look Under the Bed\n");
        printf("3. Open the Window\n");
        printf("4. Exit Game\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                if(key==1)
                {
                    printf("\n🔓 You used the key.\n");
                    printf("Door Opened!\n");
                    printf("🎉 Congratulations! You Escaped!\n");
                    return 0;
                }
                else
                {
                    printf("\n🚪 Door is Locked!\n");
                    printf("Find the key first.\n");
                }

                break;

            case 2:

                if(key==0)
                {
                    printf("\n🔑 You found a KEY under the bed!\n");
                    key=1;
                }
                else
                {
                    printf("\nNothing is under the bed.\n");
                }

                break;

            case 3:

                printf("\n🪟 Window is too small to escape.\n");

                break;

            case 4:

                printf("\nGame Over!\n");
                return 0;

            default:

                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
