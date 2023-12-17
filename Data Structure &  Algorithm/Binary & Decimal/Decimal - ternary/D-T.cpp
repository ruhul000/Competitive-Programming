#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  long int i,n,a[30];

    while(cin>>n)   // n = Decimal number
    {
        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            i=0;
            while(n>0)
            {
               a[i]=n%3;
               n=n/3;
               i++;
            }

            for(i=i-1; i>=0; i--)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
    }
return 0;
}

