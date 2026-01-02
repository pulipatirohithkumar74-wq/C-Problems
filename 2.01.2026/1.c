#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,rem,rev=0;
    scanf("%d",&n);
    while(n!=0){  //0!=0 f
        rem=n%10;  //2%10=2
        rev=rev*10+rem;//0*10+6=6,0*10+2=2,0*10+0=0,0*10+2=2
        n=n/10;//0/10=0
    }
    printf("%d",rev);
    return 0;
}