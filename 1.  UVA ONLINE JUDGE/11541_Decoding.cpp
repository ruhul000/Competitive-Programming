//http://uva.onlinejudge.org/external/115/11541.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int i,j,t,l,css=0,count=0,n,a,loc;
    char s[10000],c;

    cin>>t;

    getchar();
    while(t--)
    {
        css++;
        gets(s);
        l=strlen(s);
        cout<<"Case "<<css<<": ";
        for(i=0; i<l; i++)
        {
            n=0;
            if(s[i]>='A' &&s[i]<='Z')
            {
                c=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                n+=s[i]-'0';
                i++;
                while(s[i]>='0' && s[i]<='9')
                {
                    n=n*10+s[i]-'0';
                    i++;
                }
                i--;
            }
            for(j=0; j<n; j++)
            {
                cout<<c;
            }
        }
        cout<<endl;
    }

    return 0;
}
