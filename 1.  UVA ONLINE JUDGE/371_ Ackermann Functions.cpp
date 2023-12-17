//http://uva.onlinejudge.org/external/3/371.html
//Accepted
#include <stdio.h>
unsigned long int length_count(unsigned long int num)
{
	unsigned long int count = 0;
	if(num==1) count=3;
	else
	{
         while(num!=1)
         {

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
	}
	return count;
}

int main()
{
	unsigned long int num1,num2;
	unsigned long int i;
	unsigned long int temp,v;

	while(scanf("%li %li", &num1, &num2) &&num1 &&num2)
	{
	    unsigned long int max = 0;
        unsigned long int length = 0;

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
                v=i;
            }
        }

         printf("Between %li and %li, %li generates the longest sequence of %li values.\n", num1, num2,v,max);
	}
	return 0;
}


