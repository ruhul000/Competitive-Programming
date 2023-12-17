//http://uva.onlinejudge.org/external/113/11371.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    char n[10],m[10];
    long long i=0,l,a,b,c,t,d,e,z,c1,a1,t1;

    while(cin>>n)
    {
        /*for(int j=0; j<10; j++)
        {
            n[j]=0;
            m[j]=0;
        }*/

        l=strlen(n);
        sort(n,n+l);

        /*for(i=0;i<l;i++)
        cout<<n[i]<<" ";*/

        z=0;
        if(n[0]=='0')
        {
            for(i=0; i<l; i++)
            {
                if(n[i]=='0')
                {
                    z++;
                }
                else break;
            }
        }
        //cout<<endl<<z<<endl;

        for(i=0;i<l;i++)
        {
            m[l-i-1]=n[i];
        }

        swap(n[0],n[z]);

        /*cout<<"n=";
        for(i=0;i<l;i++)
        cout<<n[i]<<" ";
        cout<<endl;*/

        /*cout<<"m=";
        for(i=0;i<l;i++)
        cout<<m[i]<<" ";
        cout<<endl;*/

            c=1;
            a=0;
            t=0;
            c1=1;
            b=0;
            t1=0;

            for(i=l-1; i>=0; i--)
            {
                t=(n[i]-48)*c;
                c=c*10;
                a=a+t;

                t1=(m[i]-48)*c1;
                c1=c1*10;
                b=b+t1;
            }


            d=b-a;
            e=d/9;
            cout<<b<<" - "<<a<<" = "<<d<<" = 9 * "<<e<<endl;
    }

    return 0;
}
