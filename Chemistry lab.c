#include <stdio.h>

int main()
{
    int choice;

    printf("Choose Chemical\n");
    printf("1. Acid\n");
    printf("2. Water\n");
    printf("3. Base\n");

    scanf("%d",&choice);

    if(choice == 2)
        printf("✅ Safe Experiment\n");
    else
        printf("💥 Explosion!");

    return 0;
}
