#include <stdio.h>

int fib(unsigned long int n)
{

    unsigned long int f1=1,f2=1,fib=0;
    int i;

    if (n==1 || n==2)
    {
      return 1;
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            fib=f1+f2;
            f2=f1;
            f1=fib;
        }
        return fib;
    }
}

int main()
{
    unsigned long int fibNum,i,length;

    printf("Length = ");

    scanf("%lu",&length);

        for (i=1; i<=length; i++)
        {
            fibNum = fib(i);
            printf("%lu ", fibNum);
        }

return 0;
}
