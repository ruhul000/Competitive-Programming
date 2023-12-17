//http://uva.onlinejudge.org/external/114/11479.html
//Accepted
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long i,t,a,b,c;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b || a<=0 || b<=0 || c<=0)
        {
            cout<<"Case "<<i<<": Invalid"<<endl;
        }
        else if(a==b && b==c && c==a)
        {
            cout<<"Case "<<i<<": Equilateral"<<endl;
        }
        else if(a==b || b==c || c==a)
        {
            cout<<"Case "<<i<<": Isosceles"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": Scalene"<<endl;
        }
    }


    return 0;
}
