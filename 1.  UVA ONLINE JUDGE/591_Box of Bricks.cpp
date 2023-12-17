//http://uva.onlinejudge.org/external/5/591.html

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i,wall,sum,temp,moves,set=0;
    int ara[100];

    while(scanf("%d",&wall) && wall)
    {
        sum=0;
        temp=0;
        moves=0;
        set++;
        for(i=0; i<wall; i++)
        {
                cin>>ara[i];
                sum += ara[i];
                //cout<<sum<<endl;
        }
        if(sum%wall==0)
        {
            temp = sum/wall;

            for(i=0; i<wall; i++)
            {
                if(ara[i]>temp)
                {
                    moves += ara[i]-temp;
                }
            }
            cout<<"Set #"<<set<<"\nThe minimum number of moves is "<<moves<<".\n"<<endl;
        }
        else break;
    }
    return 0;
}
