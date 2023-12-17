//http://uva.onlinejudge.org/external/103/10346.html
//Accepted

#include<iostream>
using namespace std;

int main()
{
    int k,n,xtra,b,total,a;

    while(cin>>n>>k)
    {
        a=n;
        xtra=0;
        total=0;
        b=0;
        while(1)
        {
            if(n%k==n)
            {
              break;
            }
            xtra=n%k;
            //cout<<"xtra="<<xtra<<endl;
            b=n/k;
            //cout<<"b="<<b<<endl;
            n=xtra+b;
            total=total+b;
            //cout<<"total="<<total<<endl;
            //cout<<"n="<<n<<endl;
        }
        cout<<total+a<<endl;

    }
    return 0;
}


