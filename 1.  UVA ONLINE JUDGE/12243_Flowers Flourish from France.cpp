//http://uva.onlinejudge.org/external/122/12243.html

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int i,flag,l;
    char s[1000];

    while(gets(s))
    {
        l=strlen(s);

        if(s[0]=='*' && l==1) break;

        flag=0;
        for(i=0; i<l-1; i++)
        {
            if(s[i]!=' ')
            {
                flag=1;
            }
            else if(s[i]==' ' && i!=l-1)
            {
                if(s[i+1]==s[0] || s[i+1]==(s[0]+32) || s[i+1]==(s[0]-32))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(s[0]!='*' && l==1)
         {
            flag=1;
         }

        if(flag==1)
        {
            cout<<"Y\n";
        }
        else
        {
            cout<<"N\n";
        }
    }
    return 0;
}
