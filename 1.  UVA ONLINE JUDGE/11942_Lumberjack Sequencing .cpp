//http://uva.onlinejudge.org/external/119/11942.html
//ACCepted
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n[15],i,max,min,c,d;

    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {

        for(i=0; i<=9; i++)
        {
            cin>>n[i];
        }
        c=0;
        for(i=0; i<=9; i++)
        {
            if(n[i]<n[i+1])
            {
                c=1;
            }
            else
            {
                c=0;
                break;
            }
        }
        d=0;
        for(i=0; i<9; i++)
        {
            if(n[i]>n[i+1])
            {
                d=1;
            }
            else
            {
                d=0;
                break;
            }
        }

        if(c==1 || d==1)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }

    }
    return 0;
}
