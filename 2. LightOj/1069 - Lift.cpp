//http://lightoj.com/volume_showproblem.php?problem=1069
//Accepted
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int a,b,t,time,css=0;

    cin>>t;

    while(t--)
    {
        css++;
        cin>>a>>b;
        if(a>b) time = (a-b) * 4 + a * 4 +19;
        else time = (b-a) * 4 + a * 4 +19;
        cout<<"Case "<<css<<": "<<time<<endl;
    }
    return 0;
}
