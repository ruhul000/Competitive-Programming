//http://uva.onlinejudge.org/external/116/11689.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
    int t,e,f,c,n,xtra,b,total;

    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        n=0;
        xtra=0;
        total=0;
        b=0;

        n=e+f;

        while(1)
        {
            if(n%c==n)
            {
              break;
            }
            xtra=n%c;
            //cout<<"xtra="<<xtra<<endl;
            b=n/c;
            //cout<<"b="<<b<<endl;
            n=xtra+b;
            total=total+b;
            //cout<<"n="<<n<<endl;
        }
        cout<<total<<endl;
    }

    return 0;
}
