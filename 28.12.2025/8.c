#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("lower case");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("upper case");
    }
    return 0;
}