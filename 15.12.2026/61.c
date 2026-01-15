#include <stdio.h>
int main() {
    //Your Code goes here!
    int base,exp,i;
    int result=1;
    scanf("%d%d",&base,&exp);
    for(i=1;i<=exp;i++){
        result=result*base;
    }
    printf("%d",result);
    return 0;
}