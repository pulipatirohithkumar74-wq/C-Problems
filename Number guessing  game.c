#include <stdio.h>

int main()
{
    int secret = 27;
    int guess;

    printf("=== Number Guess Game ===\n");
    printf("Guess the number between 1 and 50\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("🎉 Correct! You guessed the number.\n");
            break;
        }
        else if(guess < secret)
        {
            printf("Hint: Try a BIGGER number 🔼\n");
        }
        else
        {
            printf("Hint: Try a SMALLER number 🔽\n");
        }
    }

    return 0;
}
