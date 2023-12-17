#include <stdio.h>

int main()
{
	 char string[1000];
	 while(NULL !=  gets(string))
	 {

		  int i;
		  for(i=0;i<1000;i++)
		  {

				if(string[i] >= 65 && string[i] <= 90)
				{
					 string[i] = 'a' + (string[i]-'A');
				}

		  }
		  printf("%s",string);

	 }

	 return 0;
}





//user defined function--1

/*void eddy(void);

void main()
{
	eddy();
}

void eddy(void)

{
	 char string[1000];
	 while(NULL !=  gets(string))
	 {

		  int i;
		  for(i=0;i<1000;i++)
		  {

				if(string[i] >= 65 && string[i] <= 90)
				{
					 string[i] = 'a' + (string[i]-'A');
				}

		  }
		  printf("%s",string);

	 }

} */




//user define function--4

/*char eddy(char)

void main()
{
	char string[1000];

	while(NULL != gets(string))
	{
		for(i=0; i<1000; i++)
		{
			char ans[1000];
			ans[]=eddy(string[i]);
		}
		printf("%s",ans);
	}
	return 0;
}

char eddy(char strg)
{
	char str[1000];
	if(str[i] >= 65 && str [i] <=90)
	{
		 str[i] = 'a' + (str[i] - 'A');
	}

	return str[i];
}*/

//user defined function--2



