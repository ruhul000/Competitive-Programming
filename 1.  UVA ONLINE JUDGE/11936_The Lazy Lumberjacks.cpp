//uva.onlinejudge.org/external/119/11936.html


//accepted

#include <stdio.h>
#include <math.h>

int main()
{
    long int a,b,c,t,i;

    scanf("%ld",&t);

    for(i=1; i<=t; i++)
    {

        scanf("%ld %ld %ld",&a,&b,&c);


            if(a+b>c && b+c>a && a+c>b)
            {
                printf("OK\n");
            }
            else
            {
                printf("Wrong!!\n");
            }

    }
    return 0;
}
