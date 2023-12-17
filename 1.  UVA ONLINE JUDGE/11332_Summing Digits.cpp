//http://uva.onlinejudge.org/external/113/11332.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



int main()
{
    long long n;
    int sum,g[15],f[10];

    while(cin>>n)
    {
      if(n==0)break;
      sum = 0;
      for(int i=0; i<10; i++)
      {
          g[i]=n%10;
          n=n/10;
      }
      for(int i=0; i<10; i++)
      {
          sum=sum+g[i];
      }
      if(sum/10==0)
      {
          cout<<sum<<endl;
      }
      else
        {
            for(int i=0; i<5; i++)
            {
                f[i]=sum%10;
                sum=sum/10;
            }
            for(int i=0; i<5; i++)
            {
                sum=sum+f[i];
            }
            if(sum/10==0)
            {
                cout<<sum<<endl;
            }
            else
            {
                for(int i=0; i<5; i++)
                {
                    f[i]=sum%10;
                    sum=sum/10;
                }
                    for(int i=0; i<5; i++)
                {
                    sum=sum+f[i];
                }
                    cout<<sum<<endl;
            }
        }
    }

    return 0;
}
