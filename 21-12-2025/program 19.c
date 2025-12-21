#include <stdio.h>
int main() {
    //Your Code goes here!
    int attendance;
    scanf("%d",&attendance);
    if(attendance>=75){
        printf("allowed");
    }
    else{
        printf("not allowed");
    }
    return 0;
}