#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int i=0;
    
    fgets(s,sizeof(s),stdin);
    
    while (s[i]!='\0'){
        if(s[i]==' '){
            printf("\n");
        }else{
            printf("%c",s[i]);
        }
        i++;
    }
    
    return 0;
}