//http://uva.onlinejudge.org/external/102/10235.html
//Accepted
#include <stdio.h>
#include<iostream>
using  namespace std;

 int is_prime(int n)
 {
     int i;
     if (n < 2)
     {
         return 0;
     }
     for(i = 2; i < n; i++)
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
     int n,s,t;
     while(cin>>n)
     {

         if(1 == is_prime(n))
         {
             t=n;
             s=0;
            while(n!=0)
            {
                s=s*10+n%10;
                n/=10;
            }
            if(t==s) cout<<t<<" is prime."<<endl;
            else if(1 == is_prime(s))
            {
                cout<<t<<" is emirp."<<endl;
            }
            else
            {
                cout<<t<<" is prime."<<endl;
            }
         }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
     }
     return 0;
 }
