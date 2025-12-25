#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a>0&&a%2==0){
        printf("positive even");
    }
    else if(a>0&&a%2!=0){
        printf("positive odd");
    }
    else if(a<0){
        printf("negative");
    }
    
    return 0;
}