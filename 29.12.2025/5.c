#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a%2==0&&a%3==0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}