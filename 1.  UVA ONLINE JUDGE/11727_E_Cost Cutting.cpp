//http://uva.onlinejudge.org/external/117/11727.html

//accepted

#include<iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int salary[3],t,i;


    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&salary[0],&salary[1],&salary[2]);

        sort(salary,salary+3);
        printf("Case %d: %d\n",i,salary[1]);
    }
    return 0;
}
