//http://uva.onlinejudge.org/external/2/299.html

#include<stdio.h>

int main()
{

    int a[50],i,j,n,count,temp,T;

    scanf("%d",&T);

    while(T)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<(n-i-1);j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    T--;
    }
    return 0;
}

