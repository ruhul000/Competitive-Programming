//http://uva.onlinejudge.org/external/125/12502.html
//Accepted
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double a,c,x,y,m,t,i,z;

    cin>>t;

    while(t--)
    {
        z=0;
        cin>>x>>y>>m;

        c=(x+y)/3;

        a=x-c;

        z= (a*m)/c;

        printf("%.0lf\n",z);
    }


    return 0;
}
