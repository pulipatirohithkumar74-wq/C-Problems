#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, j;
    char temp;

    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for (i = 0; i < strlen(a); i++) {
        for (j = i + 1; j < strlen(a); j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < strlen(b); i++) {
        for (j = i + 1; j < strlen(b); j++) {
            if (b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    if (strcmp(a, b) == 0)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
