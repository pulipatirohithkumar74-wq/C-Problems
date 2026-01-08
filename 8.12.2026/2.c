#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);//3
    for(int row=n;row>=1;row--){ //3=3;3>=1 t||2>=1 t
        for(int space=1;space<=n-row;space++){ //s=1;1<=0; t
            printf(" ");
        }
        for(int star=1;star<=2*row-1;star++){ //st=1;1<=3 t
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//*