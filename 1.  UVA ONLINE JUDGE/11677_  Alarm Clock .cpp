//http://uva.onlinejudge.org/external/116/11677.html
//Accepted

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2,time,sm,am;

    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0) break;

        sm=h1*60+m1;
        am=h2*60+m2;
        if(sm<am)
        {
            time=am-sm;
           cout<<time<<endl;
        }
        else
        {
            am=am+1440;
            time=am-sm;
            cout<<time<<endl;
        }
    }
    return 0;
}
 /*else if(h1>h2 && m1<m2)
        {
            time=(24-h1+h2)*60+(m2-m1);
            cout<<time<<endl;
        }
        else if(h1<h2 && m1>m2)
        {
            time=(h2-h1)*60-(m1-m2);
            cout<<time<<endl;
        }
        else if(h1>h2 && m1>m2)
        {
            time=(23-h1+h2)*60+(60-m1+m2);
            cout<<time<<endl;
        }
        else if(h1==h2 && m1==m2)
        {
            time=24*60;
            cout<<time<<endl;
        }
        else if(h1==h2 && m1>m2)
        {
            time=23*60+(60-m1+m2);
            cout<<time<<endl;
        }
        else if(h1==h2 && m1<m2)
        {
            time=24*60+(m2-m1);
            cout<<time<<endl;
        }
        else if(h1>h2 && m1==m2)
        {
            time=(24-h1+h2)*60;
            cout<<time<<endl;
        }
        else if(h1<h2 && m1==m2)
        {
            time=(h2-h1)*60;
            cout<<time<<endl;
        }
        else
        {
            time=(h2-h1)*60+(m2-m1);
            cout<<time<<endl;
        }*/
