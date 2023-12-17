#include <stdio.h>

unsigned long int length_count(unsigned long int num)
{
	unsigned long int count = 1;
	 for(;;)
	 {
		  if(num==1)
		  {
				break;
		  }
		  if(num%2!=0)
		  {
				num=3*num+1;
				count++;
		  }
		  else
		  {
				num=num/2;
				count++;
		  }

	 }
	return count;
}

int main()
{
	unsigned long int num1,num2;
	unsigned long int i;
	unsigned long int onum1, onum2;
	unsigned long int temp;

	while(scanf("%li %li", &num1, &num2)==2)
	{
	    unsigned long int max = 0;
        unsigned long int length = 0;
        onum1= num1;
        onum2 = num2;
        if(num1>num2)
        {
            temp = num1;
            num1= num2;
            num2 = temp;
        }
        for(i = num1; i<= num2; i++)
        {
            length = length_count(i);
            if(length>max)
            {
                max = length;
            }
        }

         printf("%li %li %li\n", onum1, onum2, max);
	}
	return 0;
}
