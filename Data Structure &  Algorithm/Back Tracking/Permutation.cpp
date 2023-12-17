#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cstring>
#include<vector>
using namespace std;

char arr[]={'a','b','c'};
vector<char>result;
int taken[20]={0};

void call()
{
    if(result.size()==3)
    {
        for(int i=0;i<3;i++)
        //printf("%c",result[i]);
        puts("");
        return;
    }
    //cout<<"\nz"<<endl;
    for(int i=0;i<3;i++)
    {
        //cout<<"i="<<i<<endl;
        if(taken[i]==0)
        {
            //printf("%d %d \n",i,taken[i]);

            taken[i]=1; result.push_back(arr[i]);

            printf("%d %d %c ",i,taken[i],result[i]);

            call();
            taken[i]=0; result.pop_back();

            //printf("#%d #%d #%c\n",i,taken[i],result[i]);
        }
    }
}
int main()
{
    call();
}
