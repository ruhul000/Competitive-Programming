#include <stdio.h>

int main()
{
    long int T,i,k,j,a;
    scanf("%ld",&T);
    for(i=1; i<=T; i++)
    {
        long int SUM=0;
        scanf("%ld",&k);
        for(j=1; j<=k; j++)
        {
            scanf("%ld",&a);
            SUM=SUM+a;
        }
        printf("%ld\n",SUM);
    }
    return 0;
}
