//http://uva.onlinejudge.org/external/103/10370.html
//Accepted
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double avg,e,sum,count,n;
    int i,t,m[1020];
    cin>>t;
    while(t--)
    {
        sum=0;
        count=0;
        avg=0;

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>m[i];
            sum=sum+m[i];
        }

        e=sum/n;

        for(i=0; i<n; i++)
        {
            if(e<m[i])
            count++;
        }

        avg=(100*count)/n;

        printf("%0.3lf%%\n",avg);
    }

    return 0;
}
