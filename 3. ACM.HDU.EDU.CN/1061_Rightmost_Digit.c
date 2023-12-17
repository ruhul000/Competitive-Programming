#include <stdio.h>

/*int main()
{
	int Test,k;
	scanf("%d",&Test);
	for(k=1; k<=Test; k++)
	{
		unsigned long number;
		unsigned long i,last_number,multyple,multypleRemiander;
		scanf("%lu",&number);
		number = number % 100;
		last_number = number % 10;
		multypleRemiander = last_number;
		for(i=0; i<number-1; i++)
		{
			 multyple =  multypleRemiander * last_number;
			multypleRemiander = multyple % 10;
		}
		printf("%lu\n",multypleRemiander);
	}
  return 0;
}*/
int main()
{
	int Test,k;
	int a=4;
	int b=6;
	int c=7;
	int d=3;

	scanf("%d",&Test);
	for(k=1; k<=Test; k++)
	{
		unsigned long number;
		unsigned long last_number, sec_last;
		scanf("%lu",&number);
		number = number % 100;
		last_number = number % 10;
		if(last_number == 0 || last_number == 1 || last_number == 5 || last_number == 6 || last_number == 9)
		{
			printf("%d\n",last_number);
		}
		else if(last_number == 2)
		{
			sec_last = number / 10 ;
			if(sec_last%2==0)
			{
				printf("%d\n",a);
			}
			else
			{
				printf("%d\n",b);
			}
		}
		else if(last_number == 3)
		{
			sec_last = number / 10 ;
			if(sec_last%2==0)
			{
				printf("%d\n",c);
			}
			else
			{
				printf("%d\n",last_number);
			}
		}
		else if(last_number == 4)
		{
			printf("%d\n",b);
		}
		else if(last_number == 7)
		{
			sec_last = number / 10 ;
			if(sec_last%2==0)
			{
				printf("%d\n",d);
			}
			else
			{
				printf("%d\n",c);
			}
		}
		else if(last_number == 8)
		{
			sec_last = number / 10 ;
			if(sec_last%2==0)
			{
				printf("%d\n",b);
			}
			else
			{
				printf("%d\n",a);
			}
		}
	}
  return 0;
}

