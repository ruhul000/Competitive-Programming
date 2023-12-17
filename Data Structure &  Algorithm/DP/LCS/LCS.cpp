/********************LCS with Path******************/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char ch1[100]={"a1b2c3d4e"};
	char ch2[100]={"zz1yy2xx3ww4vv"};
	int res[100][100];
	int path[100][100];
	int i,j,k,m,n;
	i=strlen(ch1);
	j=strlen(ch2);
	for(k=i;k>=1;k--)
	{
		ch1[k]=ch1[k-1];
	}
	for(k=j;k>=1;k--)
	{
		ch2[k]=ch2[k-1];
	}
	for(k=0;k<=i;k++)
	{
		res[k][0]=0;
	}
	for(k=0;k<=j;k++)
	{
		res[0][k]=0;
	}
	for(m=1;m<=i;m++)
	{
		for(n=1;n<=j;n++)
		{
			if(ch1[m]==ch2[n])
			{
				res[m][n]=res[m-1][n-1]+1;
				path[m][n]=-1;					//  corner
			}
			else
			{
				if(res[m-1][n]>res[m][n-1])
				{
					res[m][n]=res[m-1][n];
					path[m][n]=-2;				//up
				}
				else
				{
					res[m][n]=res[m][n-1];
					path[m][n]=-3;				//left
				}
			}
		}
	}

	for(m=1;m<=i;m++)
	{
		for(n=1;n<=j;n++)
		{
		    cout<<res[m][n]<<" ";
		}
		cout<<endl;
	}

	while(1)
	{
		if(i==0||j==0)
			break;
		else if(path[i][j]==-1)
		{
			cout<<ch1[i];
			i=i-1;
			j=j-1;
		}
		else if(path[i][j]==-2)
			i--;
		else if(path[i][j]==-3)
			j--;
	}
	cout<<endl;
	return 0;
}
