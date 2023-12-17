//http://lightoj.com/volume_showproblem.php?problem=1053

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
     long long t,css=0,ara[3],i,a,b,c;

    cin>>t;
    while(t--)
    {
        css++;

        for(i=0; i<3; i++)
        {
            cin>>ara[i];
        }

        sort(ara,ara+i);

        a=ara[0]*ara[0];
        b=ara[1]*ara[1];
        c=ara[2]*ara[2];

        if(a+b==c)
        {
            cout<<"Case "<<css<<": "<<"yes\n";
        }
        else
        {
            cout<<"Case "<<css<<": "<<"no\n";
        }
    }


return 0;
}
