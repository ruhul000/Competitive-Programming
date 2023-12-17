//http://uva.onlinejudge.org/external/111/11152.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{

    double a,b,c,s,a_tri, a_inC, a_circumrC,radius_in, radius_cir,pi,sun,vio;
    pi =  2*acos(0);


    while(cin>>a>>b>>c){

        s = (a+b+c)/2;

        //cout<<s<<endl;

        a_tri = sqrt(s*(s-a)*(s-b)*(s-c));

        //cout<<a_tri<<endl;

        radius_in = a_tri/s;

        //cout<<radius_in<<endl;

        a_inC = pi*(radius_in*radius_in);

        //cout<<a_inC<<endl;

        radius_cir = (a*b*c)/(4*a_tri);

        //cout<<radius_cir<<endl;

        a_circumrC = pi*(radius_cir*radius_cir);

        //cout<<a_circumrC<<endl;

        sun = a_circumrC - a_tri;

        vio = a_tri - a_inC;

        //cout<<sun<<" "<<vio<<" "<<a_inC<<endl;

        printf("%.4lf %.4lf %.4lf\n",sun,vio,a_inC);
    }
    return 0;
}
