//http://uva.onlinejudge.org/external/104/10424.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int add(int a)
{
    int b=0;
    while(a!=0)
    {
        b=b+a%10;
        a=a/10;
    }
    return b;
}
int main()
{
    char s1[25],s2[25];
    int data[26],data1[26];
    int i,j,l,l1,sum,sum1,r1,r2;
    double a,b,love;

    while(gets(s1) && gets(s2))
    {
       l=strlen(s1);
       l1=strlen(s2);
       for(i=0; i<l; i++)
       {
           data[i]=0;
           data1[i]=0;
       }
       love=0;
       sum=0;
       sum1=0;
       r1=0;
       r2=0;

//###############For s1###############//
       j=0;
       for(i=0; i<l; i++)
       {
           if(s1[i]>=97 && s1[i]<=122)
           {
               data[j]=s1[i]-96;
               j++;
           }
           else if(s1[i]>=65 && s1[i]<=90)
           {
               data[j]=s1[i]-64;
               j++;
           }
       }

       for(i=0; i<l; i++)
       {
           sum=sum+data[i];
       }
       r1=add(sum);
       while(r1/10!=0)
       {
          r1=add(r1);
       }
       //cout<<r1<<endl;
//###############For s2###############//
       j=0;
       for(i=0; i<l1; i++)
       {
           if(s2[i]>=97 && s2[i]<=122)
           {
               data1[j]=s2[i]-96;
               j++;
           }
           else if(s2[i]>=65 && s2[i]<=90)
           {
               data1[j]=s2[i]-64;
               j++;
           }
       }

       for(i=0; i<l1; i++)
       {
           sum1=sum1+data1[i];
       }
       r2=add(sum1);
       while(r2/10!=0)
       {
          r2=add(r2);
       }
       //cout<<r2<<endl;
//##################End##############//
       if(r1>r2)
       {
           a=r2;
           b=r1;
       }
       else
       {
           a=r1;
           b=r2;
       }

       love = (a/b)*100;

       printf("%.2lf %%\n",love);
    }
    return 0;
}











