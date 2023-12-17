//http://uva.onlinejudge.org/external/119/11984.html
//Accepted
#include<stdio.h>

int main()
{
    int T,i;
    double C,F,d;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf %lf",&C,&d);

        F = ((9 * C)/5)+32;
        F = F + d;
        C = ((F - 32) * 5)/9;

        printf("Case %d: %.2lf\n",i,C);
    }
    return 0;
}
