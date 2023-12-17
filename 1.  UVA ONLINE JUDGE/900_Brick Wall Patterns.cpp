//http://uva.onlinejudge.org/external/9/900.html

//Accepted

#include <stdio.h>

int fib(unsigned long int n)
{

    unsigned long int f1=1,f2=0,fib=0;
    int i;

    if (n<2)
    {
      return n;
    }
    else
    {
        for(i=1;i<=n;i++)
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

  while((scanf("%lu",&length)) && length)
    {
            fibNum = fib(length);
            printf("%lu\n", fibNum);
    }

return 0;
}



