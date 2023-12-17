//http://uva.onlinejudge.org/external/114/11428.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int N,x,y,is_found;

    while(cin>>N)
    {
        if(N==0) break;
        is_found=0;
        for(y=0; y<60; y++)
        {
            if(is_found==1) break;
            for(x=y+1; x<60; x++)
            {
                if(N==pow(x,3)-pow(y,3))
                {
                    is_found=1;
                    break;
                }
                else if(N<pow(x,3)-pow(y,3))
                {
                    break;
                }
            }
        }
        if(is_found==1)
        cout<<x<<" "<<y-1<<endl;
        else
        cout<<"No solution"<<endl;

    }


    return 0;
}
