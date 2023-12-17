#include <stdio.h>

int y;
int fib(int n)
	{ if(n==1 || n==0)
	   return n;
	  y=fib(n-1)+fib(n-2);
	   return y;
	}
int main()
{ int a,r;

    while((scanf("%d",&a)) && a)
    {
        r=fib(a);
        printf("%d\n",r);
    }
    return 0;
}
