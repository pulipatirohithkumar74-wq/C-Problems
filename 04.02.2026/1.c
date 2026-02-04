#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char str[50];
    int i,len,valid=1;
    scanf("%s",&str);

    len=strlen(str);

    if(len<6||len>12){
        valid=0;
    }

    if(str[0]>='0'&&str[0]<='9'){
        valid=0;
    }

    for(i=0;i<len;i++){
        if(!((str[i]>='a'&&str[i]<='z')||     //if(not((letter)or(digit)))
        (str[i]>='0'&&str[i]<='9'))){
            valid = 0;
            break;
        }
    }
   
   if(valid){
    printf("valid username");
   }
   else{
    printf("invalid username");
   }

    return 0;
}