//http://www.lightoj.com/volume_showproblem.php?problem=1389
//Accepted
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int T,N,num_s,css=0,i,j;
    char a[100];
    cin>>T;
    while(T--)
    {
       css++;
       cin>>N;

       for(i=0; i<N; i++)
       {
           cin>>a[i];
       }
       num_s=0;
       for(i=0; i<N;)
       {
           if(a[i]=='#')
           {
               i++;
           }
           else
           {
                num_s++;
                i += 3;
           }
       }
       cout<<"Case "<<css<<": "<<num_s<<endl;
    }

    return 0;
}



