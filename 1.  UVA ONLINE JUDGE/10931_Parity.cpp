//http://uva.onlinejudge.org/external/109/10931.html
//Accepted
#include<stdio.h>

int main()
{
int i,n,k,j,b[100],count;

    while(scanf("%d",&n))
    {
        if(n==0) break;
        count=0;
        k=n;
        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
        printf("The parity of ");
        for(j=i;j>=0;j--)
        {
            printf("%d",b[j]);
        }
        printf(" is %d (mod 2).\n",count);
    }
return 0;
}
