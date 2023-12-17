//http://uva.onlinejudge.org/external/102/10222.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char key[35]={'q','w','e','r','t','y','u','i','o','p','[',']','a','s','d','f','g','h','j','k','l',';','\'','\\','z','x','c','v','b','n','m',',','.','/','\n'};
    char s[10000];
    int l,i,j;

    gets(s);
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            s[i] = 'a' + (s[i]-'A');
        }
    }
    /*for(i=0; i<l; i++)
    {
        cout<<s[i];
    }
    cout<<endl;*/

    for(i=0; i<l; i++)
    {
        if(s[i]==' ') cout<<' ';

        for(j=0; j<35; j++)
        {
            if(s[i]!=' ' && s[i]!='q' && s[i]!='w' && s[i]!='\\')
            {
                if(s[i]==key[j])
                {
                    cout<<key[j-2];
                }
            }
        }
    }
    cout<<endl;

    return 0;
}
