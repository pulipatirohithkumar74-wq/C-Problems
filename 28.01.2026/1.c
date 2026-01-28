#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@company.com";

    scanf("%s", email);

    int emailLen = strlen(email);
    int domainLen = strlen(domain);

    // Check if email length is at least as long as domain
    if (emailLen < domainLen) {
        printf("Invalid");
        return 0;
    }

    // Compare the ending part of email with domain
    if (strcmp(email + emailLen - domainLen, domain) == 0)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
