//http://uva.onlinejudge.org/external/117/11777.html
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int m1,m2,f,a,c[3],t,i,css=0,total,avg;

    cin>>t;
    while(t--)
    {
        css++;
        cin>>m1>>m2>>f>>a;
        for(i=0; i<3; i++)
        {
            cin>>c[i];
        }
        sort(c,c+i);
        avg=(c[1]+c[2])/2;
        total=m1+m2+f+a+avg;
        if(total >= 90) cout<<"Case "<<css<<": "<<"A"<<endl;
        else if(total >= 80 && total < 90)
        cout<<"Case "<<css<<": "<<"B"<<endl;
        else if(total >= 70 && total < 80)
        cout<<"Case "<<css<<": "<<"C"<<endl;
        else if(total >= 60 && total < 70)
        cout<<"Case "<<css<<": "<<"D"<<endl;
        else if(total < 60)
        cout<<"Case "<<css<<": "<<"F"<<endl;
    }
    return 0;
}
