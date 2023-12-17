//http://uva.onlinejudge.org/external/117/11716.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    char s[10100];
    int l,t,n,i,j,a;

    cin>>t;
    getchar();
    while(t--)
    {
        l=0;
        n=0;
        a=0;

        gets(s);

        l=strlen(s);
        n=sqrt(l*1.0);
        a=n;
        n=n*n;

        if(n!=l)
        {
            cout<<"INVALID\n";
        }
        else
        {
            for(j=0; j<a; j++)
            {
                for(i=j; i<l; i+=a)
                cout<<s[i];
            }
            cout<<endl;
        }
    }
return 0;
}
