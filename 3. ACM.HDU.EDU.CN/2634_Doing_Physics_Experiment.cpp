#include <stdio.h>

int main()
{
    int t,c,i,j;
    double n,m=0;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&c);
        for(j=1; j<=c; j++)
        {
            scanf("%ld",&n);

            m=(m+n)/c;
        }
        printf("The average M = %.9ld.",m);
    }
    return 0;
}
