#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lucky, guess;

    srand(time(0));

    lucky = rand() % 10 + 1;

    printf("=== LOTTERY GAME ===\n");
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    printf("Lucky Number: %d\n", lucky);

    if(guess == lucky)
        printf("🎉 Congratulations! You won ₹1000\n");
    else
        printf("😢 Better luck next time\n");

    return 0;
}
