//http://uva.onlinejudge.org/external/117/11799.html
//accepted
#include <stdio.h>

int main()
{
    int i,j,k,T,t;
    long int a,temp;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&t);
        temp=0;
        for(j=1; j<=t; j++)
        {
            scanf("%ld",&a);
            if(a>temp)
            {
                temp=a;
            }
        }
        printf("Case %d: %ld\n",i,temp);
    }

    return 0;
}
