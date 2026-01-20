#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char largest[50], smallest[50];
    int i = 0, j = 0;

    largest[0] = '\0';    // INITIALIZE
    smallest[0] = '\0';  // INITIALIZE

    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';

            if (strlen(largest) == 0 || strlen(word) > strlen(largest))
                strcpy(largest, word);

            if (strlen(smallest) == 0 || strlen(word) < strlen(smallest))
                strcpy(smallest, word);

            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s", smallest);

    return 0;
}
