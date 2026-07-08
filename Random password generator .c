#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand(time(0));

    printf("Password: ");

    for(i=1;i<=8;i++)
        printf("%c", rand()%26+'A');

    return 0;
}
