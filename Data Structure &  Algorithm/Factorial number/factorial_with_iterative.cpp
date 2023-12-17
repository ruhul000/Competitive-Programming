#include <stdio.h>

int factorial(int n)
{
    int num=1,i;

    for(i=1; i<=n; i++)
    {
        num = num * i;
    }
    return num;
}

int main()
{
    int n,i,factNum=0;

    printf("Number: ");
    scanf("%d",&n);
    factNum = factorial(n);
    printf("Factorial %d! = %d",n,factNum);

    return 0;
}
