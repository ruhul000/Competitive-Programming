/*#include <stdio.h>

int main()
{
    int num1,num2,temp,gcd;
    printf("num1= ");
    scanf("%d",&num1);
    printf("num2= ");
    scanf("%d",&num2);

    if(num1 == 0)
        gcd = num1;
    else if(num2 == 0)
        gcd = num2;
    else
        {
            while(num2 != 0)
            {
                temp = num2;
                num2 = num1 % num2;
                num1 = temp;
            }
                gcd = num1;
        }

        printf("Gcd is %d\n", gcd);

        return 0;
}
*/

//****************Extended Euclid's Algorithm*********//

#include<stdio.h>
unsigned long d,x,y;

void Extended_Euclid(unsigned long a, unsigned long b)
{
    unsigned long x1;
    if(b>a)
    {
        x1=a; //if b>a so i used this if condition
        a=b;  //result is ok but x & y swaped
        b=x1;
    }
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
        return;
    }
    Extended_Euclid(b,a%b);
    d=d;
    x1=x-(a/b)*y;
    x=y;
    y=x1;
}

int main()
{
    unsigned long a,b;  // d=gcd(a,b) = ax+by formula

    while(scanf("%lu %lu",&a,&b)==2)
    {
        Extended_Euclid(a,b);
        printf("%lu %lu %lu\n",d,x,y);
    }
    return 0;
}


//************Gcd Using Recursive**************//

/*#include<stdio.h>

unsigned int Euclid_gcd(unsigned int a, unsigned int b)
{
    if(b==0) return a;
    else return Euclid_gcd(b,a%b);
}

int main()
{
    unsigned int a,b,gcd;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        gcd=Euclid_gcd(a,b);
        printf("%lu\n",gcd);
    }
return 0;
}*/
