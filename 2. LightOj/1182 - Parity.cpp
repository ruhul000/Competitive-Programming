//http://lightoj.com/volume_showproblem.php?problem=1182
//Accepted
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  long int css=0,t,i,j,n,k,a[32],count=0,b[1000];

    cin>>t;
    while(t--)   // n = Decimal number
    {
        css++;
        cin>>n;
        count=0;
        k=n;
        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
        /*for(j=i;j>=0;j--)
        {
            printf("%d",b[j]);
        }
        printf(" %d \n",count);*/
        if(count%2==0) cout<<"Case "<<css<<": even\n";
        else cout<<"Case "<<css<<": odd\n";
    }
return 0;
}
