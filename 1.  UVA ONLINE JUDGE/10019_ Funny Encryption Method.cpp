//http://uva.onlinejudge.org/external/100/10019.html
//Accepted


#include<iostream>
#include<stdio.h>
using namespace std;

int t,M,B1=0,B2=0,a[30],i,hexa;


int binary(int x)
{

    if(x==0)
    {
        return 0;
    }
    else
    {
        i=0;
        while(x>0)
        {
            a[i]=x%2;
            x=x/2;
            i++;
        }

        for(i=i-1; i>=0; i--)
        {
            if(a[i]==1)
            B1++;
        }
      return B1;
    }
}


int main()
{
    int b[10];

    cin>>t;

    while(t--)
    {
        for(i=0; i<10; i++)
            {
                b[i]=0;
            }

        cin>>M;

        B1=0;
        B2=0;

        B1 = binary(M);

        if(M==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            i=0;
            while(M>0)
            {
               b[i]=M%10;
               M=M/10;
               i++;
            }

            /*for(i=0; i<30; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;*/

            for(i=0; i<10; i++)
            {

                if(b[i]==1 || b[i]==2 || b[i]==4 || b[i]==8)
                {
                    B2=B2+1;
                    //cout<<"aa:"<<B2<<endl;
                }
                else if(b[i]==3 || b[i]==5 || b[i]==6 || b[i]==9 || b[i]==10 || b[i]==12)
                {
                    B2=B2+2;
                }
                else if(b[i]==7 || b[i]==11 || b[i]==13 || b[i]==14)
                {
                    B2=B2+3;
                }
                else if(b[i]==15)
                {
                    B2=B2+4;
                }

            }

        }
        cout<<B1<<" "<<B2<<endl;
    }


    return 0;
}
