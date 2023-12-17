//http://uva.onlinejudge.org/external/103/10300.html

//accepted

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T,i,f,j;
    long int sqr,anml,e_frnd,sum;

    while(scanf("%d",&T) != EOF)
    {
        for(i=1; i<=T; i++)
        {
             sum=0;
            cin>>f;

            for(j=1; j<=f; j++)
            {

                cin>>sqr>>anml>>e_frnd;
                sum = sum + sqr*e_frnd;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
