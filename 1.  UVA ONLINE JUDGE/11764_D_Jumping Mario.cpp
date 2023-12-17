//http://uva.onlinejudge.org/external/117/11764.html

//accepted

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T,j,i,wall,hight,high_jump,low_jump,temp;
    cin>>T;
    for(j=1; j<=T; j++)
    {
        temp=0;
        high_jump = 0;
        low_jump = 0;

        cin>>wall;
        for(i=1; i<=wall; i++)
        {
            cin>>hight;
            if(i == 1)
            {
                temp = hight;
            }
            else
            {
                 if(hight>temp)
                    {
                        high_jump++;
                        temp=hight;
                    }
                else if(hight<temp)
                {
                    low_jump++;
                    temp=hight;
                }
            }

        }

        printf("Case %d: %d %d\n",j,high_jump,low_jump);

    }

    return 0;
}
