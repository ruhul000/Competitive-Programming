//http://uva.onlinejudge.org/external/117/11713.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
   char s1[20],s2[20];
   int t,l1,l2,a[20],b[20],i,f1,f2,r;

   cin>>t;

   while(t--)
   {

    cin>>s1>>s2;

    l1=strlen(s1);
    l2=strlen(s2);

       if(l1!=l2)
       {
           cout<<"No\n";
       }
       else
       {
           for(i=0; i<l1; i++)
           {
               a[i]=0;
               b[i]=0;
           }

           f1=strcmp(s1,s2);

           if(f1==0)
           {
               cout<<"Yes\n";
           }
           else
            {
                f2=1;
                for(i=0; i<l1; i++)
                {
                    if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u')
                    {
                        if(s1[i]!=s2[i])
                        {
                            f2=0;
                            break;
                        }
                    }
                    if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
                    {
                        a[i]=1;
                    }
                    if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u')
                    {
                        b[i]=1;
                    }
                }

                r=0;
                for(i=0; i<l1; i++)
                {
                    if(a[i]==b[i])
                    {
                        r=1;
                    }
                    else
                    {
                        r=0;
                        break;
                    }
                }
                if(r==1 && f2==1)
                {
                    cout<<"Yes\n";
                }
                else
                {
                    cout<<"No\n";
                }
            }
       }

   }
    return 0;
}
