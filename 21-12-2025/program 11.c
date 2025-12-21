#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if((a>=-9)&&(a<=9)){
        printf("single digit");
    }
    else{
        printf("not single digit");
    }
    
    return 0;
}