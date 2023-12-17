//http://uva.onlinejudge.org/external/122/12293.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long m,n,i;

    while(cin>>n)
    {
        if(n==0) break;

        m=1;
        for(i=0; i<n; i++)
        {
            if(m==n)
            {
                cout<<"Bob\n";
                break;
            }
            if(m>n)
            {
                cout<<"Alice\n";
                break;
            }
            m*=2;
            m++;
        }
    }
    return 0;
}
