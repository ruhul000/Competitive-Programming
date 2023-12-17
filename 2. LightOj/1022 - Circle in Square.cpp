//http://lightoj.com/volume_showproblem.php?problem=1022
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    double pi=2*acos(0.0),r,sa,ca,res;
    int t,css=0;
    cin>>t;

    while(t--)
    {
        css++;
        cin>>r;

        sa=(r+r)*(r+r);
        ca=pi*r*r;

        res=sa-ca;

        printf("Case %d: %0.2lf\n",css,res);
    }


return 0;
}
