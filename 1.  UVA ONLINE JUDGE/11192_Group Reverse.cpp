//http://uva.onlinejudge.org/external/111/11192.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int n,l,i,k,t,p;
    char s[150],c[150];

    while(cin>>n)
    {
        if(n==0) break;

        cin>>s;

        l=strlen(s);
        k=0;
        p=l/n;
        t=p;
        while(n--)
        {

            for(i=p-1; i>=k; i--)
            {
                cout<<s[i];
            }
            k=p;
            p=p+t;

        }
        cout<<endl;
    }



    return 0;
}
