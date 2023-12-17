//http://uva.onlinejudge.org/external/100/10041.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int r,s[550],i,sum,t,m;
    cin>>t;

    while(t--)
    {
        m=0;
        sum=0;
        cin>>r;
        for(i=0; i<r; i++)
        {
            cin>>s[i];
        }
        sort(s,s+i);
        if((r%2)==0) m=(r/2)-1;
        else m=r/2;

        for(i=0; i<r; i++)
        {
            sum=sum+abs(s[i]-s[m]);
        }
        cout<<sum<<endl;
    }

    return 0;
}
