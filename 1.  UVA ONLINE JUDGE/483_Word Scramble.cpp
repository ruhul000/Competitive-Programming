//http://uva.onlinejudge.org/external/4/483.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[1005];
    int l,i,j,t;


    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1; j>=0; j--)
                {
                    if(s[j]==' ') break;
                    cout<<s[j];
                }
                cout<<" ";
            }
        }
        for(i=l-1; i>=0; i--)
        {
            if(s[i]==' ') break;
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
