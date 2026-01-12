#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char ch[100],rev[100];
      int i,j=0;
      scanf("%s",ch);
      for(i=strlen(ch)-1;i>=0;i--){
        rev[j]=ch[i];
        j++;
      }
        rev[j]='\0';
        if(strcmp(ch,rev)==0){
            printf("polindrom");
        }
        else{
            printf("not polindrom");
        }

      
    return 0;
}