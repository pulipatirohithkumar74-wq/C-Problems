#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greater");
    }
    else if(b>a&&b>c){
        printf("b is greater");
    }
    else if(c>a&&c>b){
        printf("c is greater");
    }
    
    return 0;
}