//uva.onlinejudge.org/external/113/11388.html
//accepted
#include <stdio.h>

int main()
{
    long long a,b;
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a==0)
        {
            printf("%lld %lld\n",a,b);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
