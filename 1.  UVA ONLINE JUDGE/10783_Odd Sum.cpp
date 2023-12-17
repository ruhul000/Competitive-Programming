//http://uva.onlinejudge.org/external/107/10783.html
//accepted

#include <stdio.h>

int main()
{
    int T,j,i,a,b,sum;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        scanf("%d %d",&a,&b);
        sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2==0) continue;
            else
            sum=sum+i;
        }
        printf("Case %d: %d\n",j,sum);
    }


    return 0;
}
