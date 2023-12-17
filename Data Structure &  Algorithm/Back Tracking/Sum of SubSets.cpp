//****************Sum Of Sub Sets************//

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int data[10]={1,2,3,4,5,11,6,8,9,10};
int used[10];
void SumOfSubSets(int sum,int pos)
{
    int i;

    if(sum==15)
    {
        for(i=0; i<10; i++)
        {
            if(used[i]==1)
            {
                cout<<data[i]<<" ";
            }
        }
		cout<<endl<<endl;
    }
    else
    {
        for(i=pos; i<10; i++)
        {
            if(used[i]==0 && (sum+data[i])<=15)
            {
                used[i]=1;
                SumOfSubSets(sum+data[i],i+1);
				used[i]=0;
            }
        }
    }
}

int main()
{
	//memset(used,0,sizeof used);
    SumOfSubSets(0,0);

    return 0;
}
























/*#include<stdio.h>

int count,w[10],d,x[10];

void subset(int cs,int k,int r)
{
   int i;
   x[k]=1;
   if(cs+w[k]==d)
    {
    {
       printf("\n Subset solution = %d\n",++count);
       for(i=0; i<=k; i++)
       {
         if(x[i]==1)
         printf("%d\n",w[i]);
       }
     }
   else if(cs+w[k]+w[k+1] <=d)
        subset(cs+w[k],k+1,r-w[k]);
    if((cs+r-w[k]>=d)&&(cs+w[k+1])<=d)
    {
      x[k]=0;
      subset(cs,k+1,r-w[k]);
    }
}

int main()
{
    int sum=0,i,n;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements in ascending order\n");
    for(i=0; i<n; i++)
    scanf("%d",&w[i]);
    printf("Enter the required sum\n");
    scanf("%d",&d);
    for(i=0; i<n; i++)
    sum +=w[i];
    if(sum < d)
    {
        printf("no solution exits\n");

    }
    printf("The solution is\n");
    count =0;
    subset(0,0,sum);
    return 0;
}*/
