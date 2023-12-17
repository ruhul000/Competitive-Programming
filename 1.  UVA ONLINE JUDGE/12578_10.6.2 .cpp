//http://uva.onlinejudge.org/external/125/12578.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    double n,a,b,c,l,w,r,t,area_G,area_r,pi;
    pi =  acos(-1);
    a=10;
    b=6;
    c=2;
    cin>>t;
    while(t--)
    {
        area_G=0;
        area_r=0;
        cin>>n;
        l=n;
        w=(b*n)/a;
        r=(c*n)/a;
        area_r = pi*r*r;
        area_G = (l*w)-area_r;

        printf("%.2lf %.2lf\n",area_r,area_G);
        //cout<<area_G<<" "<<area_r<<endl;
    }


return 0;
}
