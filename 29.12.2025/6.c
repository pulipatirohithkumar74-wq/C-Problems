#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
        printf("alphabet");
    }
    else{
        printf("not alphabet");
    }
    return 0;
}