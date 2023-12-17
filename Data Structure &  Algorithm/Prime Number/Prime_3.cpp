#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

#define cover(a,d) memset(a,d,sizeof(a))
bool prime[20000010];

void sieve()
{
    prime[1]=false;
        int n=sqrt(20000010);
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=20000010;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        for(int i=0; i<=20000; i++)
        {
            if(prime[i]==1)
            cout<<i<<" ";
        }
}

int main()
{
	cover(prime,true);
    sieve();


	return 0;
}

