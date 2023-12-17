//http://www.lightoj.com/volume_showproblem.php?problem=1305
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int a1,b1,a2,b2,a3,b3,a4,b4,area,x,y,m,n,p,q,r,s;
    int t,css=0;

    cin>>t;

    while(t--)
    {
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        css++;

        /*m=(a1+a3)/2;
        n=(b1+b3)/2;

        a4=(2*m)-a2;
        b4=(2*n)-b2;*/
        m=(a2-a1);
        n=(b2-b3);

        a4=a3-m;
        b4=b1-n;

        p = a2-a1;
        q = b2-b1;
        r = a4-a1;
        s = b4-b1;

        area = abs(p*s - q*r);

        /*x=(a1*b2)+(a2*b3)+(a3*b4)+(a4*b1);
        y=(b1*a2)+(b2*a3)+(b3*a4)+(b4*a1);

        area= abs(x-y)/2;*/

        cout<<"Case "<<css<<": "<<a4<<" "<<b4<<" "<<area<<endl;
    }
    return 0;
}
