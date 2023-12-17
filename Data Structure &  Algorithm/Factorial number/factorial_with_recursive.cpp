#include <stdio.h>

long long int factorial(int a)
{
	int fact=1;
	if(a==1)
	{
		return 1;
	}
	else
	{
		fact = a * factorial(a-1);
	}
	return fact;
}


int main()
{
    int n,factNum=0;
    printf("Number = ");
	scanf("%d",&n);
	factNum = factorial(n);
	printf("Factorial %d! = %d",n,factNum);

	return 0;
}



