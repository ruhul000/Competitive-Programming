#include <stdio.h>

int main()
{
    long long SUM;
    int num,i,T;
    while((scanf("%d",&T))!=EOF)
    {
        //for(i=1; i<=T; i++)
        {
            scanf("%d",&num);
            SUM = num * (num + 1)/2;
            printf("%lld\n\n",SUM);
        }
    }
    return 0;
}

/*#include<stdio.h>
long long n, sum;
int main()
{
    int i;
    while(scanf("%lld",&n)!=EOF)
    {
        sum=n*(n+1)/2;
        printf("%lld\n\n",sum);
    }
    return 0;
}*/

