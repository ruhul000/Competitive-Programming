//http://uva.onlinejudge.org/external/100/10066.html
//Accepted
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int n1,n2,css=0;
int i,j,k,m,n,ch1[150],ch2[150];
int res[150][150];

int main()
{

	while(scanf("%d%d",&n1,&n2)&&n1&&n2)
	{
	    css++;
	    for(i=0; i<n1; i++)
	    {
	        scanf("%d",&ch1[i]);
	    }
        for(i=0; i<n2; i++)
	    {
	        scanf("%d",&ch2[i]);
	    }

	    for(k=n1;k>=1;k--)
        {
            ch1[k]=ch1[k-1];
        }

        for(k=n2;k>=1;k--)
        {
            ch2[k]=ch2[k-1];
        }
        for(k=0;k<=n1;k++)
        {
            res[k][0]=0;
        }
        for(k=0;k<=n2;k++)
        {
            res[0][k]=0;
        }

        for(m=1;m<=n1;m++)
        {
            for(n=1;n<=n2;n++)
            {
                if(ch1[m]==ch2[n])
                {
                    res[m][n]=res[m-1][n-1]+1;
                }
                else if(res[m-1][n]>=res[m][n-1])
                {
                    res[m][n]=res[m-1][n];
                }
                else
                {
                    res[m][n]=res[m][n-1];
                }
            }
        }

        printf("Twin Towers #%d\nNumber of Tiles : %d\n",css,res[n1][n2]);

        cout<<endl;
	}

	return 0;
}
