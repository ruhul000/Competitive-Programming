//http://uva.onlinejudge.org/external/118/11854.html

//accepted

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c) &&a &&b &&c)
    {
        if(pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2) == pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
