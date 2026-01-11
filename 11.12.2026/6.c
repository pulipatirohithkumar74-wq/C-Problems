#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char ch[100];
    int i,count=0;
    scanf("%s",&ch);
    for(i=0;i<strlen(ch);i++){
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&
        ch[i]!='A'&&ch[i]!='E'&&ch[i]!='I'&&ch[i]!='O'&&ch[i]!='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}