#include <stdio.h>
int main() {
    //Your Code goes here!
    int i,a;
    scanf("%d",&a);
    int fact=1;
    
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}