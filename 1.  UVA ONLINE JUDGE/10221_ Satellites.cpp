//http://uva.onlinejudge.org/external/102/10221.html
//Accepted

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
//#define pi = 3.14159;
using namespace std;

int main()
{
    double s,a,arc_l=0,chord_l=0,rad,d,sine;
    double pi = 2*acos(0);
    char ch1[5]="min";
    char ch2[5];
    int i;

    while(cin>>s>>a)
    {
        /*for(i=0; i<3; i++)
        {
            cin>>ch[i];
        }*/

        scanf("%s",&ch2);

        //cout<<ch2<<endl;
        if(a>180)
        {
            a=360-a;
        }

        i=strcmp(ch1,ch2);

        if(i==0)
        {
            a = a/60;
            //cout<<"a="<<a<<endl;
        }

        rad = s + 6440;

        a = a * (pi/180);//degree into radian

        arc_l = rad * a;

        sine = sin(a/2);

        //cout<<"sine = "<<sine<<endl;

        chord_l = 2 * rad * sine;

        printf("%lf %lf\n",arc_l+1e-9,chord_l+1e-9);
    }

    return 0;
}
