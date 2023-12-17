//http://uva.onlinejudge.org/external/116/11608.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    int a[20],b[20],i,t;

    while(cin>>a[0])
    {
        t=0;
        if(a[0]<0) break;
        for(i=1; i<=12; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<12; i++)
        {
            cin>>a[i];
        }

        cout<<"Case "<<++t<<":\n";
        for(i=0; i<12; i++)
        {
            if(a[i]-b[i]>=0)
            {
                 a[i+1]=a[i+1]+a[i]-b[i];
                 cout<<"No Problem! :D\n";
            }
            else
            {
                a[i+1]+=a[i];
                cout<<"No Problem. :(\n";
            }
        }
    }


    return 0;
}
