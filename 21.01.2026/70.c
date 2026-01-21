#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;
    int visited[100] = {0};

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (visited[i] == 1)
            continue;

        count = 1;
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%c %d ", str[i], count);
    }

    return 0;
}
