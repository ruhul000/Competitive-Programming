//http://uva.onlinejudge.org/external/109/10970.html

#include <stdio.h>

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n) != EOF)
    {
        printf("%d\n",m*n-1);
    }

    return 0;
}
