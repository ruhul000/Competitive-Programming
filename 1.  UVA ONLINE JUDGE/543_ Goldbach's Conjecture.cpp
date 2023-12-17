//http://uva.onlinejudge.org/external/5/543.html
#include <stdio.h>
#include <iostream>
using namespace std;

long long is_prime(long long n)
 {
   long long i;
   if (n < 2)
   {
     return 0;
   }
   if(n == 2)
   {
     return 1;
   }
   if(n % 2 == 0)
   {
     return 0;
   }
   for(i = 3; i <= n / 2; i = i + 2)
   {
     if(n % i == 0)
     {
       return 0;
     }
   }
   return 1;
 }

int main()
 {
     long long n,prime[100000],i,j=0;

     //for(i=1;i<50; i++) prime[i]=0;
        int l;
     for(i=1;i<100000; i++)
     {
         if(1 == is_prime(i))
         {
             prime[j]=i;
              l=j++;
         }
     }
     for(j=0;j<=l; j++)
     {
         cout<<j<<"="<<prime[j]<<endl;
     }

     /*while(cin>>n)
     {
         if(n==0) break;

         if(1 == is_prime(n))
         {
             printf("%d is a prime number.\n", n);
         }
        else
         {
            printf("%d is not a prime number.\n", n);
         }
     }*/
     return 0;
 }
