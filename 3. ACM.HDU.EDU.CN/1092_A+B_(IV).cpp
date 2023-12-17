#include <stdio.h>

int main()
{
    int T,i;
    while(scanf("%d",&T),T)
    {
        int num1=0,num2,sum=0;

        for(i=1;i<=T;i++)
        {
            scanf("%d",&num2);

            sum = sum + num2;

            num1=num2;
        }
        printf("%d\n",sum);
    }
    return 0;
}

