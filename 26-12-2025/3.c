#include <stdio.h>
int main() {
    //Your Code goes here!
    int units,bill;
    scanf("%d",&units);
    if(units<=100){
        bill=units*1;
    }
    else{
        bill=100*1;
        bill=bill+(units-100)*2;
        printf("%d",bill);
    }
    
    return 0;
}