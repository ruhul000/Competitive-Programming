//http://uva.onlinejudge.org/external/103/10347.html
//http://agutie.homestead.com/files/Heron/heron_formula_medians.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    double a,b,c,area,m,y,z;

    while(cin>>a>>b>>c)
    {
        if(a==0 || b==0 || c==0 || a+b<=c || b+c<=a || c+a<=b)
        {
            cout<<"-1.000\n";
        }
        else
        {
            m=(a+b+c)/2;
            //cout<<"m="<<m<<endl;
            y=m*(m-a)*(m-b)*(m-c);
            //cout<<"y="<<y<<endl;
            z=sqrt(y);
            //cout<<"z="<<z<<endl;
            area=(4*z)/3;
            printf("%.3lf\n",area);
        }
    }

    return 0;
}
