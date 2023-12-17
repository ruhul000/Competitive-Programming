#include <stdio.h>

//accepted

int main()
{
    long int a,b;
    int t,i;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%ld %ld",&a,&b);

        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }
    }

    return 0;
}
