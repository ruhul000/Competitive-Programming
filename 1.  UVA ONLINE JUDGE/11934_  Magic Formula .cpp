//http://uva.onlinejudge.org/external/119/11934.html
//Accepted

#include <iostream>
using namespace std;

int main()
{
    long long a,b,c,d,L,f,i,count;

    while(cin>>a>>b>>c>>d>>L)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0) break;
        else
        {
            count = 0;

            for(i=0; i<=L; i++)
            {
                f = i*i*a + i*b + c;
                if(f%d==0)
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }

    return 0;
}
