//http://uva.onlinejudge.org/external/4/445.html
//ACCEPTED
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
char str[200];
int i,j,l,n;

while(gets(str))
{
    l=strlen(str);
    n=0;
    for(i=0; i<l; i++)
    {
        if(str[i]=='!')cout<<endl;
        if(str[i]>='0' && str[i]<='9')
        {
            n=n+str[i]-48;

            if(str[i+1]=='b')
            {
                for(j=1; j<=n; j++)
                {
                    cout<<" ";
                }
                n=0;
            }
            else if(str[i+1]>='A' && str[i+1]<='Z' || str[i+1]=='*')
            {
                for(j=1; j<=n; j++)
                {
                    cout<<str[i+1];
                }
                n=0;
            }
        }
    }
    cout<<endl;
}

return 0;
}
