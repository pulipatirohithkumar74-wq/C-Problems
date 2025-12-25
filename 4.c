#include <stdio.h>
int main() {
    //Your Code goes here!
    int age,sal;
    scanf("%d%d",&age,&sal);
    if(age>=25&&sal>=30000){
        printf("eligible");
    }
    else{
        printf("not eligible");
    }
    
    return 0;
}