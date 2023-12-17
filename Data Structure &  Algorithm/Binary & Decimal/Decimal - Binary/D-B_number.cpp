
//Decimal to Binary number..

#include<iostream>
#include<math.h>
using namespace std;

/*int main()
{
  long int i,n,a[32],count=0;

    while(cin>>n)   // n = Decimal number
    {
        count=0;
        do
        {
            for(i=0;i<=4;i++)
            {
                a[i]=n%2;
                n=n/2;
                if(a[i]==1)count++;
                //if(n==0) break;
                //cout<<n<<" "<<a[i]<<endl;
            }
        }
        while((n%2)!=0);
        /*for(i=32; i>=0; i--)
        {
            if(a[i]==1)
            {
                count++;
            }
            //cout<<a[i];
        }
        cout<<endl<<count;
        cout<<endl;
    }
return 0;
}*/
#include<stdio.h>
int i,n,k,j,b[100],count=0;

void binary(int n)
{
    k=n;
        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
}
int main()
{
    while(scanf("%d",&n))
    {
        binary(n);
        printf("\nBinary Equivalent:");
        for(j=i;j>=0;j--)
        {
            printf("%d",b[j]);
        }
        printf(" %d \n",count);
    }
return 0;
}
