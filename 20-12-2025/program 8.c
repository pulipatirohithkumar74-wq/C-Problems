#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c)){
        printf("%d");
    }
    else if((b>a)&&(b>c)){
        printf("%d");
    }
    else if((c>a)&&(c>b)){
        printf("%d");
    }
    
    return 0;
}