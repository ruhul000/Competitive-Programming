//http://uva.onlinejudge.org/external/117/11728.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int j,n;

/*int factor(int j)
{
    int i,temp=0;
    while(1)
    {
        temp=0;
        for(i=1; i<=j; i++)
        {
            if(j%i==0)
            {
                temp=temp+i;
            }
        }
        j--;
        if(j==0 && temp!=n)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
            break;
        }
    }
}*/

int main()
{
int n,i,temp=0,z,css=0;

while(cin>>n)
{
    css++;
    if(n==0) break;

    j=n;
    while(1)
    {
        if(n==1)
        {
            cout<<"Case "<<css<<": "<<n<<endl;
            break;
        }
        /*else
        {
            z=factor(n);
            if(z==1)
            {
                cout<<j<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }*/

        else if(temp==n)
        {
            cout<<"Case "<<css<<": "<<j<<endl;
            break;
        }
        else if(temp!=n && j<0)
        {
            cout<<"Case "<<css<<": -1\n";
            break;
        }
        else
        {
            temp=0;
            j--;
            for(i=1; i<=j; i++)
            {
                if(j%i==0)
                {
                    temp=temp+i;
                }
            }

        }

    }
}

return 0;
}
