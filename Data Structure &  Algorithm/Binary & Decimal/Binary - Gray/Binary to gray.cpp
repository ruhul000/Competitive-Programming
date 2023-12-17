/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  long int i,j,k,n,b[32],count=0,temp[4];

    cout<<"BINARY NUMBER 0-15\n";
    for(j=1;j<=15; j++)   // n = Decimal number
    {
        n=j;
        do
        {
            for(i=0;i<4;i++)
            {
                b[i]=n%2;
                //cout<<a[i];
                n=n/2;
            }
        }
        while((n%2)!=0);
        //temp[0]=0;
        //k=0;
        for(i=3; i>=0; i--)
        {
            //temp[k]=b[i]+b[i-1];
            cout<<b[i];
            //cout<<temp[i];
            //k++;
        }
        cout<<endl;

        /*for(i=0; i<3; i++)
        {
            if((b[i]==0 && b[i+1]==1) || (b[i]==1 && b[i+1]==0))
            {
                temp[k]=1;
                k++;
            }
            else if(b[i]==1 && b[i+1]==1)
            {
                temp[k]=0;
                k++;
            }
        }
        cout<<"0";
        for(i=0; i<3; i++)
        {
            cout<<temp[i];
        }
        cout<<endl;
    }
return 0;
}*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char bin[32];
    int gray[32];
    int i=0,len=0;

    while(1)
    {
        cout<<"Binary Number \t:: ";
        cin>>bin;

        len = strlen(bin);

        int j=len-1;
        for(i = len-1; i >= 0; i--)
        {
            if(i==0)
            {
                gray[0]=bin[0]-48;
            }
            else if((bin[i]=='0' && bin[i-1]=='1')||(bin[i]=='1' && bin[i-1]=='0') )
            {
               gray[j]=1;
               j--;
            }
            else if(bin[i]==1 && bin[i-1]==1)
            {
                gray[j]=0;
                j--;
            }
            else
            {
                gray[j]=0;
                j--;
            }
        }

        printf("Gary Number \t:: ");

        for(i=0; i<len; i++)
        {
            cout<<gray[i];
        }
        cout<<endl<<endl;;
    }
return 0;
}

