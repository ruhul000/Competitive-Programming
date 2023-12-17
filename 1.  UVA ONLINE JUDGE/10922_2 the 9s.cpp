//http://uva.onlinejudge.org/external/109/10922.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
/*int d=1;

int deg(int n)
{
    int b=0;

    if(n!=9)
    {
        d++;
        //cout<<"d="<<d<<endl;
        while(n!=0)
        {
           b=b+n%10;
           n=n/10;
        }
        //cout<<b<<endl;

        return deg(b);
    }
    return d;
}*/

int main()
{
    char s[10000];
    int i,l,loc,n,total,css=0,deg=0,b=0;
    double y;

    while(gets(s))
    {
        total=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
        {
            break;
        }

        for(i=0; i<l; i++)
        {
            total=total+s[i]-48;
        }
        //cout<<total<<endl;
        if(total%9==0)
        {
            b=0;
            deg=1;
            if(total!=9)
            {
                deg++;
                while(total!=0)
                {
                    b=b+total%10;
                    total=total/10;
                }
                if(b!=9)
                {
                    total=b;
                    deg++;
                }
            }

            cout<<s<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<endl;

        }
        else
        {
            cout<<s<<" is not a multiple of 9.\n";
        }
    }

    return 0;
}
