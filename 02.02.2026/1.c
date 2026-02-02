#include <stdio.h>

int main() {
    char name[50];
    int i = 0;

    scanf("%s", name);

    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] = name[0] - 32;
    }

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] = name[i] + 32;
        }
    }

    printf("%s", name);
    return 0;
}
