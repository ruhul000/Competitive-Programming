//http://uva.onlinejudge.org/external/109/10929.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    char s[1050];
    long long i,l,sum1,sum2,diff;

    while(cin>>s)
    {
        l=strlen(s);
        if(s[0]=='0'&&l==1){break;}

        sum1=0;
        for(i=0; i<l; i+=2)
        {
            sum1=sum1+s[i]-48;
        }

        sum2=0;
        for(i=1; i<l; i+=2)
        {
            sum2=sum2+s[i]-48;
        }
        diff=abs(sum1-sum2);

        if(diff%11==0)
        {
            cout<<s<<" is a multiple of 11.\n";
        }
        else
        {
            cout<<s<<" is not a multiple of 11.\n";
        }
    }
    return 0;
}

/*int main()
{
    char s[1050];
    long long i,l,val;

    while(cin>>s)
    {
        l=strlen(s);
        if(s[0]=='0'&&l==1){break;}

        val=0;
        for(i=0; i<l; i++)
        {
            val=((val*10)+(s[i]-'0'))%11;
        }

        if(val==0)
        {
            cout<<s<<" is a multiple of 11.\n";
        }
        else
        {
            cout<<s<<" is not a multiple of 11.\n";
        }
    }
    return 0;
}*/
