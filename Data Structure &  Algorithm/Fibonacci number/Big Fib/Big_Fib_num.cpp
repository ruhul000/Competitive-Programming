//*************Fibnacci Number By Big Integer*************//

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int ca=0;
    long j,k,m,p;
    char str[10000];

    char *fibo[5001]={0};
    fibo[0]="0";
    fibo[1]="1";

    int l1=strlen(fibo[0]);
    int l2=strlen(fibo[1]);
    int l;

    for(long i=2; i<=5000; i++)
    {

        if(l1>=l2) l=11;
        else l=12;



        for(j=l1-1,k=l2-1,m=0,p=0;p<l;j--,k--,m++,p++)
        {
            int s1;

            if(j<0)fibo[i-2][j]='0';

            s1=fibo[i-2][j]-48;

            int s2;

            if(k<0)fibo[i-1][k]='0';
            s2=fibo[i-1][k]-48;
            int ans=0;
            ans+=s1+s2+ca;
            if(ans>9)
            {
                str[m]=(ans-10)+48;
                ca=1;
            }
            else
            {
                str[m]=ans+48;
                ca=0;
            }
        }
    }
    if(ca>0)
    {
        str[m]=ca+48;
        m++;
    }
    str[m]='\0';
    fibo[i] = new char[m+1];
    long y=0;
    for(long x=m-1; x>=0; x--, y++)
    fibo[i][y]=str[x];
    fibo[i][y]='\0';
    l1=strlen(fibo[i-1]);
    l2=strlen(fibo[i]);

    int n;

    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<fibo[n]<<endl;
    }


    return 0;
}


