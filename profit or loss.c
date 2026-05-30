#include <stdio.h>

int main()
{
    int cp, sp;

    scanf("%d %d",&cp,&sp);

    if(sp > cp)
        printf("Profit = %d",sp-cp);

    else if(cp > sp)
        printf("Loss = %d",cp-sp);

    else
        printf("No Profit No Loss");

    return 0;
}
