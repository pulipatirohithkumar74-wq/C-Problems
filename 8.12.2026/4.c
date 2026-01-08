#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
    
        for(int a=1;a<=i;a++){
            printf("%d ",a);
        }
    printf("\n");
    }
    
    return 0;
}