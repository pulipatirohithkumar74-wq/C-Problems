#include <stdio.h>

int main()
{
    int choice;

    printf("1.Open Safe\n");
    printf("2.Run Away\n");

    scanf("%d",&choice);

    if(choice == 1)
        printf("💰 You Got 1 Million!\n");
    else
        printf("🏃 You Escaped Safely!\n");

    return 0;
}
