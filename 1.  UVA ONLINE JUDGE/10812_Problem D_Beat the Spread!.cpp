//http://uva.onlinejudge.org/external/108/10812.html

#include <stdio.h>

int main()
{
    int T,i;
    long int a,b;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a<b || (a+b)%2>0 )
        {
            printf("impossible\n");
        }
        else
        {
            printf("%ld %ld\n",(a+b)/2,(a-b)/2);
        }
    }
    return 0;
}
