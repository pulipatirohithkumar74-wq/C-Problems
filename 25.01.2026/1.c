#include <stdio.h>
#include <string.h>

int main() 
{
    char ch[100];
    char s[100];
    char sen[100];

    scanf("%s", ch);
    scanf("%s", s);
    getchar();                
    scanf("%[^\n]", sen);    
    
    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}
