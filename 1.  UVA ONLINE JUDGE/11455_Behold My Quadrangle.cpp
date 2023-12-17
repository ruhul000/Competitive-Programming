//http://uva.onlinejudge.org/external/114/11455.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    long long a,b,c,d,t;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;

        if(a==b&&b==c&&c==d)
        {
            cout<<"square\n";
        }
        else if(a==b && c==d || a==c && b==d || a==d && b==c)
        {
            cout<<"rectangle\n";
        }
        else if(a+b+c>d && a+b+d>c && a+c+d>b && b+c+d>a)
        {
            cout<<"quadrangle\n";
        }
        else
        {
            cout<<"banana\n";
        }
    }
}
