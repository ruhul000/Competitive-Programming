//http://uva.onlinejudge.org/external/118/11830.html
//wc
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    char s[1000], c;
    int i,j,l,loc;

    while(cin>>c>>s)
    {
        l=strlen(s);
        if(c=='0' && s[0]=='0' && l==1) break;
        loc=0;

        for(i=0; i<l-loc; i++)
        {
            if(c==s[i])
            {
                for(j=i; j<l-loc; j++)
                {
                    s[j]=s[j+1];
                }
                loc++;
                i--;
            }
        }

        if(s[0]=='0')
        {
            for(i=0; i<l-loc; i++)
            {
                if(s[i]=='0')
                {
                    for(j=i; j<l-loc; j++)
                    {
                        s[j]=s[j+1];
                    }
                    loc++;
                    i--;
                }
                else
                {
                    break;
                }
            }
        }



        if(l==loc)
        {
            cout<<'0';
        }
        else
        {
            for(i=0; i<l-loc; i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
