#include <stdio.h>

int main()
{
    long int T,i,k,j,a;

     while(scanf("%ld",&k)!=EOF)
     {
        long int SUM=0;
        for(j=1; j<=k; j++)
        {
            scanf("%ld",&a);
            SUM=SUM+a;
        }
        printf("%ld\n",SUM);
    }
    return 0;
}
