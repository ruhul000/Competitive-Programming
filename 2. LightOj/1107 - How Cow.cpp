//http://lightoj.com/volume_showproblem.php?problem=1107
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    int x,y,x1,y1,x2,y2,i,t,n,css=0;

    cin>>t;

    while(t--)
    {
        css++;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<"Case "<<css<<":\n";
        while(n--)
        {
            cin>>x>>y;

            if((x1<x && y1<y)&&(x2>x && y1<y)&&(x2>x && y2>y) && (x1<x && y2>y))
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
    }

    return 0;
}
