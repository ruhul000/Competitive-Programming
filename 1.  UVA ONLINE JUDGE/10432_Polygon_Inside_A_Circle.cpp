//http://uva.onlinejudge.org/external/104/10432.html
//Accepted

//link: http://www.mathopenref.com/polygonregulararea.html
//Area of polygon(with radius and side) = ((Radius*Radius) * side * sin(360/side))/2;
//Math.h a sin cos tan er value degree te show kore
//Convert radians to degrees formula
//Radian (180/pi) = Degree
//Convert degrees to radians formula
//Degree (pi/180) = Radian


#include <stdio.h>
#include <math.h>

int main()
{
    double r,n,area,p;

    p=4*atan(1);

    while((scanf("%lf %lf",&r,&n)) !=EOF)
    {
        //rad =  sin(360/n) * (3.14/180);
        area = r*r* n *sin((2*p)/n)/2; //2 * pi = 360
        printf("%.3lf\n",area);
    }


    return 0;
}
