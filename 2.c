#include <stdio.h>

int main() {
    char msg[100];

    fgets(msg, sizeof(msg), stdin);

    printf("%s", msg);

    return 0;
}
