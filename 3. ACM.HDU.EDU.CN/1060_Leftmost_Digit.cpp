#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long N;
	int Result,i,input;
	double multy,b,power1;
    unsigned long long temp;
	scanf("%d",&input);
	for(i=1; i<=input; i++)
	{
		scanf("%lu",&N);
		multy = N * log10(N);
		for(; ;)
		{
            if(multy > 1000000)
            {
                multy = multy - 1000000;
            }
            else
            {
                break;
            }
		}

		temp = (unsigned long)multy;

		b = multy - temp;
		power1 = pow(10,b);
		Result = (int)power1;

        printf("%d\n",Result);
	}
	return 0;
}
