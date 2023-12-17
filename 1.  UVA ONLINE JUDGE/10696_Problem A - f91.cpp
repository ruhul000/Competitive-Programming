//http://uva.onlinejudge.org/external/106/10696.html
//accepted

#include <stdio.h>

int main()
{
    long int n;

    while(scanf("%ld",&n) && n)
    {
        if(n>=101)
        {
            printf("f91(%ld) = %ld\n",n,n-10);
        }
        else
        {
            printf("f91(%ld) = 91\n",n);
        }
    }

    return 0;
}
