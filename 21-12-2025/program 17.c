#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum;
    sum=a+b+c;
    if(sum==180){
        printf("Valid");
    }
    else{
        printf("Inavlid");
    }
    
    return 0;
}