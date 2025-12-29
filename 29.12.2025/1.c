#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a>=80&&a<=100){
        printf("grade A");
    }
    else if(a>=60&&a<=79){
        printf("grade B");
    }
    else if(a>=40&&a<=59){
        printf("grade C");
    }
    return 0;
}