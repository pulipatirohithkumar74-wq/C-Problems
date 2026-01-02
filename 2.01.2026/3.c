#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,sum=0;//n=4
    scanf("%d",&n);
    while(n!=0){ //4!=0
        int digit=n%10;//4%10=4
        sum=sum+digit;//0+6=6+5=11+4=15
        n/=10;//4/10=0
    }
    printf("%d",sum);
    return 0;
}