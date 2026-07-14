#include <stdio.h>

int main()
{
    int code = 2580, guess;

    while(1)
    {
        printf("Enter Secret Code: ");
        scanf("%d",&guess);

        if(guess == code)
        {
            printf("🔓 Vault Opened!\n");
            break;
        }

        printf("Wrong Code!\n");
    }

    return 0;
}
