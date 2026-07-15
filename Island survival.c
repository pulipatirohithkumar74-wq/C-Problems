#include <stdio.h>

int main()
{
    int choice;

    printf("1.Search Food\n");
    printf("2.Build Shelter\n");
    printf("3.Swim\n");

    scanf("%d",&choice);

    if(choice == 1)
        printf("🍎 Food Found!\n");
    else if(choice == 2)
        printf("🏠 Shelter Built!\n");
    else
        printf("🦈 Shark Attacked!\n");

    return 0;
}
