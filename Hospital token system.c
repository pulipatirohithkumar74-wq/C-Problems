#include <stdio.h>

int main()
{
    int token = 1, patients;

    scanf("%d",&patients);

    while(token<=patients)
    {
        printf("Patient Token %d\n",token);
        token++;
    }

    return 0;
}
