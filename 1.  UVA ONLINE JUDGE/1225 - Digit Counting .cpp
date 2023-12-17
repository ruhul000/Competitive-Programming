//http://uva.onlinejudge.org/external/12/1225.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    unsigned long int a,b,i,j,v,n,t;
    int count[15];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        for(i=0; i<10; i++)
        {
            count[i]=0;
        }
        for(i=0; i<=a; i++)
        {
            n=i;
            while(n!=0)
            {
                v=n%10;
                n/=10;
                if(v==0) count[0]++;
                else if (v==1) count[1]++;
                else if (v==2) count[2]++;
                else if (v==3) count[3]++;
                else if (v==4) count[4]++;
                else if (v==5) count[5]++;
                else if (v==6) count[6]++;
                else if (v==7) count[7]++;
                else if (v==8) count[8]++;
                else if (v==9) count[9]++;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",count[0],count[1],count[2],count[3],count[4],count[5],count[6],count[7],count[8],count[9]);
    }

return 0;
}
