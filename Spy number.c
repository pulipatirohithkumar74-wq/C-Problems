#include <stdio.h>

int main()
{
    int n, sum=0, prod=1, rem;

    scanf("%d",&n);

    while(n>0)
    {
        rem = n%10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }

    if(sum == prod)
        printf("Spy Number");
    else
        printf("Not Spy Number");

    return 0;
}
