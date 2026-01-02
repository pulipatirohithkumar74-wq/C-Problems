#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,rev=0,last;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        last=n%10;
        rev=rev*10+last;
        n/=10;
    
    }
    if(temp==rev){
        printf("polindrome");
    }
    else{
        printf("not polindrome");
    }
    return 0;
}