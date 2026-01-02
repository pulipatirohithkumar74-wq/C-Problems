#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    int sum=0;
   int temp=n;//1
    while(temp!=0){  //1!=0
        int rem=temp%10;  //1
        int cube=rem*rem*rem;//1
        sum=sum+cube;//0+27=27+125+1
        temp=temp/10;//1/10=0
    }
    if(sum==n){
        printf("amstrong number");
    }
    else{
        printf("not amstrong number");
    }
    return 0;
}