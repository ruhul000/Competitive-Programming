//http://uva.onlinejudge.org/external/104/10405.html
//Accepted
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
int lcs[2000][2000];
int i,j,m,n;

int main()
{

string s1,s2;

while(getline(cin,s1))
	{
	    getline(cin,s2);
	    i=s1.size();
        j=s2.size();

        for(m=1;m<=i;m++)
        {
            for(n=1;n<=j;n++)
            {

                if(s1[m-1]==s2[n-1])
                lcs[m][n]=lcs[m-1][n-1]+1;
                else
                lcs[m][n]=max(lcs[m-1][n],lcs[m][n-1]);
            }
        }
        cout<<lcs[i][j]<<endl;
	}

return 0;
}

/*#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
char ch1[1010];
char ch2[1010];
int res[1010][1010];


int main()
{

	//int path[100][100];
int i,j,k,m,n;

while(1)
{
    memset(ch1,0,sizeof(ch1));
    memset(ch1,0,sizeof(ch1));
    cin>>ch1;
    cin>>ch2;
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
				//path[m][n]=-1;					//  corner
			}
			else
			{
				if(res[m-1][n]>res[m][n-1])
				{
					res[m][n]=res[m-1][n];
					//path[m][n]=-2;				//up
				}
				else
				{
					res[m][n]=res[m][n-1];
					//path[m][n]=-3;				//left
				}
			}
		}
	}

	/*for(m=1;m<=i;m++)
	{
		for(n=1;n<=j;n++)
		{
		    cout<<res[m][n]<<" ";
		}
		cout<<endl;
	}*/
    /*cout<<res[i][j]<<endl;

}
	return 0;
}*/


