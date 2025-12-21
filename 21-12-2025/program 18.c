#include <stdio.h>
int main() {
    //Your Code goes here!
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    
    return 0;
}