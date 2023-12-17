//http://uva.onlinejudge.org/external/124/12403.html
//Accepted

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long int T,t,k,money=0,rp[100];
    char op[100];

    cin>>T;
    for(int i=1; i<=T; i++)
    {
       int a=0;
       money=0;

       cin>>t;
       for(int j=1;j<=t; j++)
        {
            cin>>op;
            if(strcmp(op,"donate")==0)
            {
                cin>>k;
                money = money+k;
            }
            else if(strcmp(op,"report")==0)
            {
                a++;
                rp[a] = money;
            }

        }

        cout<<"Case "<<i<<":"<<endl;
        for(int k=1; k<=a; k++)
        {
            cout<<rp[k]<<endl;
        }

   }

return 0;
}
