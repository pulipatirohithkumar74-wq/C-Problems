#include <stdio.h>
int main() {
    //Your Code goes here!
    int pass;
    scanf("%d",&pass);
    if(pass>=35){
        printf("pass");
    }
    else if((pass>=30)&&(pass<35)){
        printf("grace pass");
    }
    else{
        printf("fail");
    }
    return 0;
}