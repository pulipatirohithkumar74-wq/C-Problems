#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char ch[100],ch2[100];
    scanf("%s%s",&ch,&ch2);

    if(strcmp(ch,ch2)==0){
    printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}