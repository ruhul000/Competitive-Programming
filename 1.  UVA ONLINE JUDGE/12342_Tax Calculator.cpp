//http://uva.onlinejudge.org/external/123/12342.html
//Accepted

#include<stdio.h>
#include<iostream>
#include<math.h>
#include <limits>
using namespace std;

int main()
{
    double money,t,tax,m;
    int css=0;

    cin>>t;
    while(t--)
    {
        css++;
        cin>>money;

        if(money<=180000)
        {
            cout<<"Case "<<css<<": 0\n";
        }
        else
        {
            money=money-180000;

            if(money<=300000)
            {
                tax=(money*10)/100;
                if(tax<2000 && 0<tax)
                {
                    cout<<"Case "<<css<<": 2000\n";
                }
                else
                {
                    cout<<"Case "<<css<<": "<<ceil(tax)<<endl;
                }
            }
            else if(money>300000)
            {
                money=money-300000;
                if(money<=400000)
                {
                    tax=((money*15)/100)+30000;
                    cout<<"Case "<<css<<": "<<ceil(tax)<<endl;
                }
                else if(money>400000)
                {
                    money=money-400000;
                    if(money<=300000)
                    {
                        tax=((money*20)/100)+30000+60000;
                        cout<<"Case "<<css<<": "<<ceil(tax)<<endl;
                    }
                    else if(money>300000)
                    {
                        money=money-300000;
                        tax=((money*25)/100)+30000+60000+60000;
                        m=ceil(tax);
                        cout<<"Case "<<css<<": "<<(long)m<<endl;
                    }
                }
            }

        }
    }

    return 0;
}
