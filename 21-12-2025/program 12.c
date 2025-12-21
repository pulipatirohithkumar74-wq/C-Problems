#include <stdio.h>
int main() {
    //Your Code goes here!
    int sal,a,b;
    scanf("%d",&sal);
    if (sal>=20000){
        a=sal+2000;
        printf("%d",a);
    }
    else{
        b=sal+1000;
        printf("%d",b);
    }
    
    return 0;
}