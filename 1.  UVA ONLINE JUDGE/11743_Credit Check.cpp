//http://uva.onlinejudge.org/external/117/11743.html
//Accepted
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,j,l,t,d[19],und[19],a[19],n,sum1,sum2, ic;
    char s[20];

    cin>>t;
    getchar();
    while(t--)
    {
        sum1=0;
        sum2=0;

        gets(s);

        for(i=0; i<19; i++)
        {
            d[i]=0;
            und[i]=0;
            a[i]=0;
        }

//***********double array**************//

            d[0]=abs(s[0]-48)*2;
            d[1]=abs(s[2]-48)*2;
            d[2]=abs(s[5]-48)*2;
            d[3]=abs(s[7]-48)*2;
            d[4]=abs(s[10]-48)*2;
            d[5]=abs(s[12]-48)*2;
            d[6]=abs(s[15]-48)*2;
            d[7]=abs(s[17]-48)*2;


        /*cout<<"Double: ";
        for(i=0; i<8; i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<endl;*/

//######################################//

//***********un double array**************//

            und[0]=s[1]-48;
            und[1]=s[3]-48;
            und[2]=s[6]-48;
            und[3]=s[8]-48;
            und[4]=s[11]-48;
            und[5]=s[13]-48;
            und[6]=s[16]-48;
            und[7]=s[18]-48;

        /*cout<<"UnDouble: ";
        for(i=0; i<8; i++)
        {
            cout<<und[i]<<" ";
        }
        cout<<endl;*/

//***************************************//

        i=0;
        n=0;
        j=0;
        while(i<8)
        {
            if(d[i]<10)
            {
                a[j]=d[i];
                j++;
            }
            else
            {
                n=0;
                while(d[i]!=0)
                {
                    n=d[i]%10;
                    a[j]=n;
                    d[i]=d[i]/10;
                    j++;
                }
            }
            i++;
        }

        /*cout<<"a: ";
        for(i=0; i<16;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/

        //cout<<"Sum1: ";
        i=0;
        while(i<16)
        {
            sum1=sum1+a[i];
            //cout<<sum1<<" ";
            i++;
        }
        //cout<<endl;

        //cout<<"Sum2: ";
        i=0;
        while(i<8)
        {
            sum2=sum2+und[i];
            //cout<<sum2<<" ";
            i++;
        }
        //cout<<endl;

        if((sum1+sum2)%10==0)
        {
            cout<<"Valid\n";
        }
        else
        {
            cout<<"Invalid\n";
        }
    }
    return 0;
}
