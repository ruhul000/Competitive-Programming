//http://uva.onlinejudge.org/external/103/10302.html
//Accepted

//S1[N] = 1  + 2  + 3  + .... + N = (1/2)N(N+1)
//S2[N] = 12 + 22 + 32 + .... + N2 = (1/6)N(N+1)(2N+1)
//S3[N] = 13 + 23 + 33 + .... + N3 = (1/4){N(N+1)}2

#include<stdio.h>
#include<math.h>
int main()
{
    long double n,sum;
    while(scanf("%Lf",&n)==1)
    {
        sum=(n*n*(n+1)*(n+1))/4;
        printf("%.0Lf\n",sum);
    }
return 0;
}

