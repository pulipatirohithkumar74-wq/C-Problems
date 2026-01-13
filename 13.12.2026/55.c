#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;

    gets(str);  

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            count++;
    }

    printf("%d", count);
    return 0;
}
