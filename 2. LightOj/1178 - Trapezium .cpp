//http://www.lightoj.com/volume_showproblem.php?problem=1178
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    double a,b,c,d,h,area,temp,x,y,z,m,n;
    int t,css=0;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;
        css++;

        temp=(-a+c+b+d)*(a-c+b+d)*(a-c+b-d)*(a-c-b+d);
        if(a>c)
        {
            z=a-c;
        }
        else
        {
            z=c-a;
        }
        h=sqrt(temp)/(2*z);
        //cout<<temp<<" "<<z<<" "<<h<<endl;

        area=0.5*(a+c)*h;

        /*x=a*c*c - a*a*c - a*d*d + c*b*b;
        y=a*c*c - a*a*c - a*b*b + c*d*d;
        z=c*c + d*d - a*a - b*b;

        m=(x*y)/(4*(c-a)*(c-a));
        n=(z/4)*(z/4);

        area = sqrt(m-n);*/


        printf("Case %d: %.9lf\n", css, area);
    }
    return 0;
}

/*#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    int ncase = 0;
    while (T--) {
        double a, b, c, d, area_tri, area_tra, s;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

        if (a == c)
            area_tra = a * b;
        else {
            if (a < c) swap(a, c);
            s = (b + d + a-c) / 2;
            area_tri = sqrt(s * (s-b) * (s-d) * (s-a+c));

            area_tra = area_tri * (a+c) / (a-c);
        }

        printf("Case %d: %.9lf\n", ++ncase, area_tra);
    }

    return 0;
}*/
