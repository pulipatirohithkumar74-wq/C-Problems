#include <stdio.h>

int main()
{
    int n, sq, temp, digits=0;

    scanf("%d",&n);

    sq = n*n;
    temp = n;

    while(temp>0)
    {
        digits++;
        temp/=10;
    }

    int mod = 1;
    for(int i=0;i<digits;i++)
        mod *= 10;

    if(sq % mod == n)
        printf("Automorphic");
    else
        printf("Not Automorphic");

    return 0;
}
