//http://uva.onlinejudge.org/external/101/10190.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long long n,m,a[1000],loc,i,b;

    while(cin>>n>>m)
    {

        loc=0;
        b=0;
        if(n<=0 || m<=0 || n==1 || m==1 || (n%m)!=0)
        {
            cout<<"Boring!"<<endl;
        }
        else
        {
            a[0]=n;

            for(i=1; i<1000; i++)
            {
                if(n==1) break;
                else if((n%m)==0)
                {
                    n=n/m;
                    //cout<<n<<" ";
                    a[i]=n;
                    //cout<<"a[i] = "<<a[i]<<" ";
                    b=1;
                }
                else
                {
                    b=0;
                    break;
                }

               loc++;
            }

            a[loc]=1;

            if(b==0)
            {
                cout<<"Boring!";
            }
            else
            {
                for(i=0; i<=loc; i++)
                {
                    if(i==loc)cout<<a[i];
                    else cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
