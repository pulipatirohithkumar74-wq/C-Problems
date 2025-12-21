#include <stdio.h>
int main() {
    //Your Code goes here!
    char grade;
    int a;
    scanf("%d",&a);
    if((a>=90)&&(a<=100)){
        printf("A",grade);
    }
    else if((a<90)&&(a>=75)){
        printf("B",grade);
    }
    else if((a<75)&&(a>=50)){
        printf("C",grade);
    }
    else{
        printf("Fail");
    }
    
    return 0;
}