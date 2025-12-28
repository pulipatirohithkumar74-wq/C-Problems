#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("negative");
    }
    else if(a>0){
        printf("positive");
    }
    else if(a==0){
        printf("zero");
    }
    return 0;
}