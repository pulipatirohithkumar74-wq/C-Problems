#include <stdio.h>
int main() {
    //Your Code goes here!
    int sal,tax;
    scanf("%d",&sal);
    if(sal>=50000){
        tax=sal-sal*10/100;
        printf("%d",tax);
    }
    else{
        printf("%d",sal);
    }
    
    return 0;
}