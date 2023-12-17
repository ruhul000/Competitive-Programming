//http://uva.onlinejudge.org/external/118/11878.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#define sc scanf
#define pf printf
using namespace std;


int main()
{
    int a,b,count=0;
    char sine,c[1000];
    while(sc("%d%c%d=%s",&a,&sine,&b,c)==4)
    {
        if(sine=='+')
        {
            if(a+b==atoi(c))
            count++;
        }
        else if(sine=='-')
        {
            if(a-b==atoi(c))
            count++;
        }
    }
    pf("%d\n",count);
    return 0;
}
