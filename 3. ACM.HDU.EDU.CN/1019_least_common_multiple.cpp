#include <stdio.h>
#include <stdlib.h>

unsigned long int lcm(unsigned long int x,unsigned long int y)
{
	unsigned long int z,temp;
	unsigned long int n;
	unsigned long int pass_x=x, pass_y=y;
	//n = x * y ;
	while(y!=0)
	{
		temp = y;
		y = x%y;
		x = temp;
	}
	 z = (pass_x / temp )* pass_y;

	 return z;
}

int main()
{
	unsigned long int T1,T2,i,j,result,value=0;
	unsigned long int* ara;
	scanf("%li",&T1);
	for(i=1; i<=T1; i++)
	{
		scanf("%li",&T2);
		ara = (unsigned long int*) malloc(T2*sizeof(unsigned long int));
		for(j=0; j<T2; j++)
		{
			scanf("%li",&ara[j]);
		}
		value = ara[0];
		for(j=1; j<T2; j++)
		{
			value = lcm(value,ara[j]);

		}
		printf("%li\n",value);

	}
	return 0;
}
