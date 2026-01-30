#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, count = 0;
    int inWord = 0;

    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] != ' ' && sentence[i] != '\n') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d", count);
    return 0;
}
