//http://acm.hdu.edu.cn/showproblem.php?pid=2138
//Accepted
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;

bool prime(int n)
{
     int i;
     for(i=2;i<=sqrt(n*1.0);i++)
     {
         if(n%i==0)return 0;
     }
     return 1;
}

int main()
{

     int n,i,count,num;

     while((scanf("%d",&n))==1)
     {
         count=0;
         for(i=0; i<n; i++)
         {
            scanf("%d",&num);
            if(1==prime(num))
            {
                count++;
            }
         }
         cout<<count<<endl;
     }
     return 0;
 }

