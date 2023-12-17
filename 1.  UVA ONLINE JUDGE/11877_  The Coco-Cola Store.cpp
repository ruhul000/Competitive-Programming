//http://uva.onlinejudge.org/external/118/11877.html
//Accepted

#include<iostream>
using namespace std;

int main()
{
    int n,xtra,b,total;

    while(cin>>n)
    {
        xtra=0;
        total=0;
        b=0;
        if(n==0) break;
        while(1)
        {
            if(n%3==n)
            {
              if(n==2) total++;
              break;
            }
            xtra=n%3;
            //cout<<"xtra="<<xtra<<endl;
            b=n/3;
            //cout<<"b="<<b<<endl;
            n=xtra+b;
            total=total+b;
            //cout<<"n="<<n<<endl;
        }
        cout<<total<<endl;

    }
    return 0;
}
