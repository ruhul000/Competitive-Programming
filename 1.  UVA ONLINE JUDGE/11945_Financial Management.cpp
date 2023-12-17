//http://uva.onlinejudge.org/external/119/11945.html

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int t,css=0,a;
    double n,sum,avg,mod;

    cin>>t;

    while(t--)
    {
        css++;
        sum=0.0;
        avg=0.0;
        a=12;
        while(a--)
        {
            cin>>n;
            sum=sum+n;
        }
        avg=sum/12.0;

        if(avg>999.0)
        {
            mod=avg;
            //avg=;
            //mod=fmod(mod,1000.0);
            printf("%d $%ld,%.2lf\n",css,long(avg/1000.0),fmod(mod,1000.0));//cout<<css<<" $"<<avg<<","<<fmod(mod,1000.0)<<endl;
        }
        else
        {
            printf("%d $%.2lf\n",css,avg);//cout<<css<<" $"<<avg<<endl;
        }
    }

    return 0;
}
