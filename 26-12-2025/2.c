#include <stdio.h>
int main() {
    //Your Code goes here!
    int sal,bonus;
    scanf("%d",&sal);
    if(sal>=30000){
        bonus=sal+sal/100*10;
        printf("%d",bonus);
    }
    else{
        bonus=sal+sal/100*15;
        printf("%d",bonus);
    }




    return 0;
}